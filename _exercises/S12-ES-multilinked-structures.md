# Estructutas Multienlazadas

1) **E01-remove-importer**: Se dispone de la información referente a un conjunto de compañías importadoras, ordenada por nombre de la compañía y también por número del permiso (en forma independiente). Además, por cada importador, se conocen los artículos con que comercia. La información se encuentra almacenada en la siguiente estructura:

```cpp
class LISTA_COMP {
	public:
		NODO_COMP *PRIM_COMP;
		NODO_COMP *PRIM_PERM;
};

class NODO_COMP {
	public:
		INFO_COMP I;
		NODO_COMP *SIG_POR_COMP;
		NODO_COMP *SIG_POR_PERM;
		NODO_ART *PRIM_ART;
}; 
class NODO_ART {
	public:
		INFO_ART A;
		NODO_ART *SIG_ART;
};
```

Se quiere que realice la operación que permita eliminar una importadora determinada y sus respectivos artículos, considere que la operación no posee pre-condición alguna.

2) **E02-sparced-diagonal**: Dada una matriz esparcida M, utilizando primitivas, elabore un algoritmo que imprima los elementos de la diagonal principal si estos están presentes.

3) **E03-sparced-multiply**: Implemente la multiplicación de 2 matrices esparcidas M1 y M2 utilizando primitivas. Deje los resultados en una matriz esparcida M3.

4) **E04-search-matrix**: Dada una matriz esparcida M y un entero n, elabore un algoritmo que realice la búsqueda de n e imprima, si es encontrado, en que posición, de lo contrario imprima “No se encontró N”.

5) **E05-document-rounds**: Se encuentran n ejecutivos sentados en una mesa redonda. El jefe de la mesa requiere que todos tengan en sus manos un documento importante, pero solo hay uno. No todos los ejecutivos tienen la misma retentiva y por ende no pueden recordar los detalles del documento si no lo leen bien. Se desea que, dada una lista circular donde cada nodo “i” posee un entero k con la retentiva del i-esimo ejecutivo, implemente una función que permita saber cuantas vueltas a la mesa debe dar el documento para que todos los ejecutivos sepan todos los detalles.

6) **E06-judicial-system**: El Poder Judicial ha decidido implementar un sistema que permita llevar un control eficiente de los tribunales y cárceles con que cuenta la nación. Dicho sistema debe satisfacer los siguientes requerimientos:

a) Dado un tribunal conocer todos los nombres de los jueces que trabajan en el mismo.
b) Conocer los nombres de todos los jueces con que cuenta la nación. Se deben listar en orden alfabético.
c) Para cada cárcel, conocer la C.I. de los presos que en ella se encuentran (orden ascendente).
d) Conocer cuál(es) es(son) el(los) preso(s) que ha(n) entrado el mayor número de veces en la cárcel.
e) Dado un juez, conocer los presos a los cuales dictó sentencia.

Además, se sabe que:

a) Un juez participa en un tribunal y en un tribunal se encuentran cualquier cantidad de jueces.
b) Cada preso se encuentra en una cárcel, y en cada una de ellas están recluídas varias personas.
c) Un preso puede haber pasado por varios juicios con jueces distintos, y un juez enjuicia a varios presos.

Se cuenta con la siguiente información:

- Para los jueces: Nombre, C.I., tribunal en el cual desempeña sus funciones, Presos a los que ha dictado sentencia, años en el cargo. 
- Para los presos: Nombre, C.I., fecha de nacimiento, motivo de la sentencia, años de la misma y número de reincidencias.
- Para las cárceles: Nombre, dirección y presos recluídos.

Proponga una representación que permita dar solución eficiente a los requerimientos.

7) **E07-matrix-analysis**: Considere la siguiente implementación de una matriz esparcida:

```cpp
class Esparcida {
	NodoCol *columnas;
};

class NodoCol {
	int columna;
	Nodo *primero;
};

class Nodo {
	int fila;
	float info;
	Nodo *proxCol;
}; 
```

Si se conoce que las matrices a almacenar son de 100x100, con un máximo de 200 elementos no nulos, haga un análisis respecto a la conveniencia de usar la representación dinámica propuesta o una representación estática, para estas condiciones. ¿Cuándo es recomendable usar la representación estática?

8) **E08-matrix-representation**: Considere la siguiente definición para matrices esparcida:

```cpp
class  Nodo {
	int columna;
	float info;
	Nodo *proxFila;
	Nodo *prevFila;
};

class Sparce {
	Nodo** elementos;
};
```

a) Analice en qué situaciones conviene usar este tipo de representación y en qué situaciones conviene usar una matriz estática.
b) Si se conoce que la matriz tiene 100 filas y 50 columnas, y en la matriz existirán cuando mucho 150 elementos no nulos ¿Cuál es la representación más eficiente en cuanto a uso de memoria?
c) En función de las preguntas anteriores: ¿Bajo qué condiciones es más conveniente utilizar un arreglo bidimensional estático que una matriz esparcida dinámica? Justifique su respuesta basándose en los principios de complejidad en tiempo y complejidad en espacio.

10) **E10-client-services**: La compañía DigitelUCV clasifica a sus clientes en A1, A2, A3, A4 y cada cliente puede contratar los servicios que desee: "DigitelUCV Básica", "Central Privada", "DigiAmigo", "Digix", "Circuito Privado".

Se desea almacenar la información tal que se pueda conocer:

a) ¿Cuántos clientes de un tipo determinado han contratado un servicio dado? De O(1)
b) ¿Quiénes son esos clientes? De O(1)

Proponga una estructura de datos eficiente para satisfacer a) y b).  Tome en cuenta que un cliente puede contratar más de un servicio a la vez, con clasificaciones distintas.

11) **E11-sparced-multiplication**: Elabore un algoritmo que permita multiplicar dos matrices esparcidas. El algoritmo debe ser lo más eficiente posible.

12) **E12-directed-graphs**: Realice los métodos PRIMERO y SIGUIENTE para grafos dirigidos representados por: matrices de adyacencia y listas de adyacencias. 

13) **E13-subject-prerequisites**: Diseñe un algoritmo que, dado el esquema de prelación de las materias de la carrera Computación y el código de una materia, imprima un listado con todas las asignaturas que prelan a la materia dada, en orden cronológico.
