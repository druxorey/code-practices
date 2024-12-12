#include <iostream>
#include <fstream>
#include <string>

struct ApuestaInfo {
	double cantidad;
	bool resultado;
};

class Usuario {
	std::string nombre;
	std::string contrasena;

	public:
		Usuario(std::string nombre, std::string contrasena) : nombre(nombre), contrasena(contrasena) {}

		std::string getNombre() { return nombre; }
		std::string getContrasena() { return contrasena; }
};

class Apuesta {
	Usuario usuario;
	ApuestaInfo apuestaInfo;

	public:
		Apuesta(Usuario usuario, double cantidad) : usuario(usuario) {
			apuestaInfo.cantidad = cantidad;
			apuestaInfo.resultado = ((int)cantidad % 5 == 0); // El resultado es verdadero si la cantidad es múltiplo de 5
		}

		Usuario getUsuario() { return usuario; }
		double getCantidad() { return apuestaInfo.cantidad; }
		bool getResultado() { return apuestaInfo.resultado; }
};


bool usuarioExiste(std::string nombre, std::string contrasena) {
	std::ifstream archivoDatos("datos.txt");
	std::string nombreGuardado, contrasenaGuardada;

	while (archivoDatos >> nombreGuardado >> contrasenaGuardada) {
		if (nombreGuardado == nombre && contrasenaGuardada == contrasena) {
			return true;
		}
	}

	return false;
}


void crearUsuario () {
	std::string usuario, contrasena;
	std::cout << "No estás en el sistema, regístrate [usuario contrasena]: ";
	std::cin >> usuario;
	std::cin >> contrasena;
	std::ofstream archivoUsuarios("datos.txt", std::ios::app);
	archivoUsuarios << usuario << " " << contrasena << '\n';
	archivoUsuarios.close();
}


int main() {
	std::string nombre, contrasena;
	float cantidad;
	char respuesta;
	bool ingresa = false;

	do {
		std::cout << "Ingrese su nombre de usuario: ";
		std::cin >> nombre;
		std::cout << "Ingrese su contraseña: ";
		std::cin >> contrasena;

		if (!usuarioExiste(nombre, contrasena)) {
			crearUsuario();
		} else {
			ingresa = true;
		}

	} while (!ingresa);

	Usuario usuario1(nombre, contrasena);

	std::cout << "Ingresa la cantidad de dinero que deseas apostar: ";
	std::cin >> cantidad;
	std::cout << "¿Es en efectivo? [s/n]: ";
	std::cin >> respuesta;

	cantidad *= (respuesta == 's' || respuesta == 'S')? 1.5 : 1;
	Apuesta apuesta1(usuario1, cantidad);

	if (apuesta1.getResultado()) {
		std::cout << apuesta1.getUsuario().getNombre() << ", has ganado " << apuesta1.getCantidad() * 2 << '\n';
	} else {
		std::cout << apuesta1.getUsuario().getNombre() << ", has perdido " << apuesta1.getCantidad() << '\n';
	}

	return 0;
}
