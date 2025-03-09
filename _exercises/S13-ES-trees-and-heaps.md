# Árboles y Montículos

1) **E01-sum-between-levels** Usando las primitivas de árboles generales desarrolle una función que retorne la suma de todos los enteros comprendidos entre dos niveles.

2) **E02-semi-complete-tree** Digamos que un árbol es semi-completo cuando sus nodos no hojas, tienen el mismo grado. Empleando las primitivas de árbol general, elabora un algoritmo que permita saber si un árbol es semi-completo (el grado del árbol no se conoce).

3) **E03-inorder-preorder** Elabore los recorridos en inorden (también llamado simétrico) y preorden de árboles generales usando solamente el recorrido en postorden (es decir, debe mostrar la secuencia de los primeros dos recorridos visitando el árbol de la forma Izquierdo-Derecho-Raiz).

4) **E04-cousins** Se tiene el siguiente árbol genealógico representado gráficamente de la siguiente manera:

![example](images/S13-E04.webp)

Implemente la operación primos, dado el nombre de una persona, imprimir a todos sus primos.

5) **E05-prune-leaves** Usando las primitivas de árboles generales, implemente la operación PodarHojas, la cual consiste en eliminar todos aquellos nodos que son hojas en un árbol.

6) **E06-value-function** Elabore un algoritmo empleando las primitivas de árbol general, que retorne el siguiente valor: Valor(A) = Productoria(izquierdo(A)) - Productoria(derecho(A)) Donde Productoria(izquierdo(A)) es la productoria de todos nodos en el subárbol izquierdo de A, y Productoria(derecho(A)) corresponde con a la productoria de los nodos en el subárbol derecho de A. Sólo debe recorrer una sola vez cada nodo, y el perfil de la función es el siguiente: int Valor (Arbol B).

7) **E07-static-representation** Considere la siguiente representación estática de árboles:

![example](images/S13-E05.webp)

Se puede ver que la forma de almacenamiento del árbol consiste en tener su recorrido en postorden definido en el arreglo (además de tener el grado de cada nodo). ¿Qué desventajas podría tener este enfoque de almacenamiento estático? Basada en esta representación defina las primitivas de Primer_Hijo, Hermano_Der y Padre. Sugerencia: Utilice una pila auxiliar.

8) **E08-true-false-statements** Indique cuáles de las siguientes afirmaciones son verdaderas o falsas. Justifique:

a. La altura del nodo de un árbol es la longitud del camino que va desde el nodo a la hoja.
b. La altura del nodo de un árbol viene dada por la altura del árbol menos el nivel del nodo.
c. Para cualquier árbol binario la secuencia que se produce al recorrerlo en preorden es diferente a la producida en simétrico.

9) **E09-binary-tree-order** Generalice la forma de los árboles binarios cuyos nodos aparecen exactamente en el mismo orden en los recorridos:

a. Preorden y Simétrico
b. Postorden y Simétrico
c. Preorden y Postorden

10) **E10-preorder-traversal** Considere el problema de recorrer un árbol binario, por ejemplo, en preorden. Para ello existen dos posibles soluciones: 

Solución a)

```cpp
void PreOrden (Arbin A) {
	if (! EsVacio(A)) {
		cout << Raiz(A) << endl;
		PreOrden(Izq(A));
		PreOrden(Der(A));
	}
}
```

Solución b)

```cpp
void PreOrden (Arbin A) {
	if (! EsVacio(A)) {
		cout << Raiz(A) << endl;
		if (! EsVacio(Izq(A))) {
			PreOrden(Izq(A));
		}
		if (! EsVacio(Der(A))) {
			PreOrden(Der(A));
		}
	}
}
```

¿Cuántas llamadas se realizan en cada caso? Exprese su respuesta en base al número de nodos del árbol 

11) **E11-general-to-binary** Dada la siguiente representación de árboles generales, elabore un algoritmo que, dado un árbol general, produzca su equivalente en un árbol binario. 

```cpp
class Nodo_Hijo {
	ArbGen pNodo;
	Nodo_Hijo *prox;
};
class Nodo {
	int info;
	Nodo_Hijo *Hijos;
};
class ArbGen {
	Nodo *root;
};
```

12) **E12-inorder-non-recursive** Se tiene un lenguaje que no permite la recursión, y para simularla emplea una pila en la cual almacena en el caso de los árboles, el camino recorrido desde la raíz hasta el nodo visitado. Se quiere que Ud. realice el algoritmo que permita recorrer un árbol binario (Sin utilizar recursión) en Simétrico. 

13) **E13-arbin-operations** Usando las operaciones de ARBIN, desarrolle las siguientes operaciones:

a) `bool EsHoja(Arbin A, Arbin X);` Tal que EsHoja(A,X) = verdad Si y sólo sí Grado(raiz(X)) = 0 en el árbol A. 
b) `bool EsPadre(Arbin A, Arbin x, Arbin y);` Tal que EsPadre(A,x,y) retorna true si y sólo si Raiz(x) es ascendiente directo de Raiz(y), y retorna false en caso contrario.

¿Qué modificaciones le haría a la estructura original para que EsPadre sea O(1)?

14) **E14-complete-binary-tree** Utilizando las primitivas de la clase Arbin elabore un algoritmo que verifique si un árbol binario es completo.

15) **E15-subtree-check** Un Árbol Binario S está incluido en un Árbol Binario T, si S es igual a T o si S es igual a un subárbol de T. Escriba una función que indique si un árbol S está incluido en un árbol T, en cuyo caso debe retornar la dirección del subárbol de T que es igual a S.

16) **E16-symmetry-check** Escriba una función que verifique la simetría de un árbol binario cualquiera. Ejemplos:

17) **E17-ancestor-check** Se tiene la secuencia en preorden, postorden y simétrico de un árbol de n nodos almacenados en tres listas distintas. Realice un algoritmo que determine si el nodo i es ascendiente del nodo j (para cualquier par de nodos i, j). ¿Sería posible elaborar dicho algoritmo con sólo dos recorridos? Si su respuesta es afirmativa ¿Cuáles serían esos pares de recorridos, y elabore los correspondientes algoritmos? Si su respuesta es negativa, justifique detalladamente el por qué. Elabore el (los) algoritmo (s) tanto para árboles binarios como para árboles generales.

18) **E18-prefix-to-infix** Dada una secuencia en notación prefija y almacenada como una SECUENCIA\[ELEMENTO\], se desea que implemente una operación utilizando las primitivas de Árboles binarios y del tipo Secuencia, que almacene dicha expresión en un árbol binario, tal que si se recorre ese árbol en Simétrico se obtenga la expresión en notación infija. Los elementos de la secuencia pueden ser operadores u operandos. Sobre dichos elementos se tiene definida la siguiente primitiva:

```cpp
Funcion EsOperador (ELEMENTO E) → Lógico 

	si E  {+, -, *, /} entonces 
		<- (Verdadero); 
	sino
		<-(Falso);
	fsi
Ffuncion
```

**Ejemplo:** Sea la secuencia S = {* + A B C}. Al aplicarle la operación Generar (var A: Arbin; S: Secuencia) y al recorrer el árbol A en simétrico, genera la secuencia: A + B * C

19) **E19-complete-full-tree** Defina árbol binario completo y lleno e indique su importancia en la implementación del concepto de Montículo.

20) **E20-heap-class** Dada la siguiente definición de clase:

```cpp
class Monticulo {
	public:
		Monticulo(int t) {
			tam=t;
			heap = new int[t];
		}
		void Insertar(int elem);
		void Remover();
	private:
		Nodo<int> *heap;
		int tam;
		void Hundir();
		void Flotar();
};
```

Implemente las primitivas Hundir y Flotar. Haciendo uso de estas implemente Insertar y Remover.

21) **E21-merge-heaps** Para la clase Monticulo definida anteriormente agregue un método que permita mezclar dos heaps con y sin claves repetidas, haciendo uso de primitivas y con el siguiente prototipo: `void Mezclar(Monticulo M);` el resultado queda en la clase Monticulo que invoca la mezcla.

22) **E22-pointer-heap** Implemente un montículo utilizando apuntadores en lugar de un arreglo. Compare la complejidad en tiempo y en espacio de ambas implementaciones.

23) **E23-heap-property** Dado el nodo raíz de un árbol binario, implemente una función que verifique si el árbol cumple la propiedad de montículo.
