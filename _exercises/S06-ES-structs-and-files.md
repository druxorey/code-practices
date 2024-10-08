# Registros y Archivos

1) **E01-product-structures**: En una tienda se tienen diferentes tipos de productos. Cada producto tiene un código, una descipción, un nombre y un precio. Existen varios tipos de productos. Cada tipo de producto tiene un nombre, un código y 10 productos.

	1. Se desea que define las estructuras de datos para almacenar un producto, y para almacenar un tipo de producto.
	2. Supongamos ahora que tenemos un arreglo con 5 tipos de productos y deseamos aumentar en un 10 % el precio de todos los productos que sean de un tipo con código C. 
	3. Haga una función que dado un código de producto P busque el producto en toda la estructura de datos y retorne verdadero si el producto existe o falso en caso contrario.

2) **E02-point-distance**: Un punto en 3 dimensiones tiene tres coordenadas X, Y, Z. Defina un registro para representarlos. Usando el registro definido anteriormente, haga una función que calcule la distancia entre los puntos.

3) **E03-letter-frequency**: Haga un algoritmo que lea todos los caracteres de un archivo llamado letras.txt y cuente la frecuencia de cada letra del archivo.

4) **E04-people-filter**: Dado un archivo personas.txt con información sobre personas, se desea que Usted haga un algoritmo que lea el archivo y lo cargue en un arreglo de registros. Luego, debe almacenar en otro archivo únicamente las cédulas y edades de las personas que tengan más de 18 años. La primera línea del archivo personas.txt contiene el número N de personas almacenadas en el archivo. Por cada persona habrá una línea con su cédula, luego una línea con su nombre completo, luego una línea con su edad, y finalmente una línea con su sexo. A lo sumo habrán 100 personas en el archivo. El registro para almacenar la información de una persona es el siguiente:

``` c++
struct Persona {
	int cedula;
	string nombre;
	int edad;
	char sexo;
};
```

5) **E05-disease-diagnosis**: Un consultorio médico realiza el diagnóstico de las posibles enfermedades que sufren sus pacientes confrontando la información de los síntomas que presenta el paciente con al información de los síntomas que caracterizan las enfermedades por ellos registradas. Así, a un paciente se le diagnostica una enfermedad si sus síntomas coinciden exactamente con los registrados para esa enfermedad. Considerando que dicho consultorio tiene caracterizadas a M enfermedades con a lo sumo N síntomas cada una, elabore un algoritmo que dada una muestra de K pacientes (nombre, sexo, edad y síntomas) indique:

	1. La enfermedad más frecuente.
	2. El porcentaje de cada enfermedad por sexo.
	
6) **E06-merge-sorted-files**: Haga un algoritmo que lea números enteros almacenados en dos archivos que contienen números enteros ordenados y genere un tercer archivo que contiene los mismos elementos de los dos archivos ordenados. Por ejemplo, si el primer archivo contiene los elementos '1' '40' '50' '100' y el segundo contiene los elementos '5' '20' '40' '80', el archivo resultante tendría los elementos: '1' '5' '20' '40' '40' '50' '80' '100'.