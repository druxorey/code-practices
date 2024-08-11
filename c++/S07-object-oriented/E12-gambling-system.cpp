#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct ApuestaInfo {
    double cantidad;
    bool resultado;
};

class Usuario {
    string nombre;
    string contrasena;

    public:
        Usuario(string nombre, string contrasena) : nombre(nombre), contrasena(contrasena) {}

        string getNombre() { return nombre; }
        string getContrasena() { return contrasena; }
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


bool usuarioExiste(string nombre, string contrasena) {
    ifstream archivoDatos("datos.txt");
    string nombreGuardado, contrasenaGuardada;

    while (archivoDatos >> nombreGuardado >> contrasenaGuardada) {
        if (nombreGuardado == nombre && contrasenaGuardada == contrasena) {
            return true;
        }
    }

    return false;
}


void crearUsuario () {
    string usuario, contrasena;
    cout << "No estás en el sistema, regístrate [usuario contrasena]: ";
    cin >> usuario;
    cin >> contrasena;
    ofstream archivoUsuarios("datos.txt", ios::app);
    archivoUsuarios << usuario << " " << contrasena << endl;
    archivoUsuarios.close();
}


int main() {
    string nombre, contrasena;
    float cantidad;
    char respuesta;
    bool ingresa = false;

    do {
        cout << "Ingrese su nombre de usuario: ";
        cin >> nombre;
        cout << "Ingrese su contraseña: ";
        cin >> contrasena;

        if (!usuarioExiste(nombre, contrasena)) {
            crearUsuario();
        } else {
            ingresa = true;
        }

    } while (!ingresa);

    Usuario usuario1(nombre, contrasena);

    cout << "Ingresa la cantidad de dinero que deseas apostar: ";
    cin >> cantidad;
    cout << "¿Es en efectivo? [s/n]: ";
    cin >> respuesta;

    cantidad *= (respuesta == 's' || respuesta == 'S')? 1.5 : 1;
    Apuesta apuesta1(usuario1, cantidad);

    if (apuesta1.getResultado()) {
        cout << apuesta1.getUsuario().getNombre() << ", has ganado " << apuesta1.getCantidad() * 2 << endl;
    } else {
        cout << apuesta1.getUsuario().getNombre() << ", has perdido " << apuesta1.getCantidad() << endl;
    }

    return 0;
}
