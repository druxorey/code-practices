# Queues, Dequeues and Stacks

1) **E01-binary-sum**: Dados dos enteros positivos, cuyos dígitos están almacenados en una pila, elabore un algoritmo, utilizando las primitivas del tipo PILA, que realice la suma de estos números dejando el resultado en otra pila. **Ejemplo:** Sea P1:\[1, 4, 5] + P2:\[5, 3, 5] = P3:\[6, 8, 0].

2) **E02-reverse-stack**: Utilizando únicamente las primitivas de la clase Pila, se quiere que se desarrolle un procedimiento que dada una pila P, la invierta. No debe utilizar estructuras auxiliares.

3) **E03-palindrome-check**: Suponga que tiene almacenado una secuencia de caracteres en una pila, y se desea saber si dicha secuencia es palíndromo. Proponga una solución para ello.

4) **E04-sum-elements**: Dada una pila de enteros, realice un algoritmo el cual sume los primeros N elementos desde el fondo hacia el tope de la misma, donde N es el fondo, sin utilizar ninguna estructura de datos auxiliar. **Ejemplo:** Para la pila desde el tope hacia el fondo sería [1, 5, 6, 7, 3], con un n=3, el cálculo sería 3+7+6=16.

5) **E05-polish-notation**: La notación polaca debe su nombre al famoso matemático polaco Jan Lukasiewicz, y se basa en que el símbolo operador se coloca delante de sus operandos. Asumiendo que todos los operadores a trabajar son binarios, se desea que:

	- Transforme una expresión en forma normal (operando operador operando) almacenada en una lista, la almacene en una pila en notación polaca. Asuma que la expresión de entrada puede tener paréntesis.
	- Elabore un algoritmo que permita evaluar una expresión en notación polaca almacenada en una pila.

	Ejemplo de notaciones polacas:
	- `+ A B`, que es equivalente a `A + B`;
	- `+ a / b c`, que es equivalente a `a + b/c`.

6) **E06-delete-nodes**: Dada una pila implemente un algoritmo para eliminar X nodos de la pila, dada una posición inicial P y un desplazamiento d. Este algoritmo eliminará los elementos existentes en la posición P y P+d tomadas desde el fondo de la pila.

7) **E07-average-stack**: Dada una pila, se desea conocer el promedio de los elementos que ella almacena. Como restricción la pila puede ser recorrida una sola vez.

8) **E08-pair-sum**: Dada una pila de enteros, se desea que usted retorne en la misma pila, la suma de los elementos que ella almacena a pares. **Ejemplo:** Sea P con los datos \[1, 2, 3, 4, 5]. Al aplicar el dicho algoritmo sobre P, debe retornar P:\[3,7,5]. No debe utilizar ninguna estructura auxiliar. 

9) **E09-prefix-evaluation**: Elabore un procedimiento que acepte como entrada una expresión aritmética simple (secuencia de números y operadores aritméticos: (+, -, * y /). Realice la evaluación de dicha expresión. Considere que la expresión aritmética viene dada en notación prefija. Elija entre las clases Pila, Cola, Lista, Dipolo para representar la expresión e implemente las operaciones en términos de las primitivas. **Ejemplo:** \[*]\[+]\[10]\[2]\[5] → (10 + 2) * 5 = 60. 

10) **E10-array-queue**: Proponga una representación para una cola, empleando un arreglo, de manera tal que el orden de la operación encolar sea O(1), implemente el algoritmo correspondiente con el uso de su estructura. 

11) **E11-reverse-average**: Dada una cola, se desea conocer el promedio de los elementos que ella almacena. El programa debe imprimir el promedio y la cola de forma invertida. 

12) **E12-min-max**: Dada una cola de enteros, realice un algoritmo que muestre el elemento mayor y el menor. 

13) **E13-stack-simulation**: Realice un algoritmo que simule una pila mediante una cola y realice la suma de los elementos de dicha “pila”. Implemente también simulando una cola a través de una pila. 

14) **E14-reverse-dipole**: Realice un algoritmo que, dada una palabra almacenada en un dipolo, producir otra nueva en otro dipolo que sea el resultado de invertirla. 

15) **E15-undo-and-redo**: Proponga una estructura de datos que permita implementar fácilmente un mecanismo de rehacer y deshacer eventos en un sistema. 

16) **E16-queue-decimal-binary**: Dado un número decimal almacenado en una pila, implemente un algoritmo para llevarlo a binario y dar el resultado en una cola. Ejemplo: (36)10 → (100100)2.

17) **E17-medieval-queue**: Una cola medieval se comporta como una cola ordinaria, con la única diferencia de que los elementos almacenados en ella se dividen en dos grupos: nobles y plebeyos. Dentro de cada grupo, los elementos deben ser atendidos en orden de llegada; pero siempre que haya nobles en la cola, estos deben ser atendidos antes que los plebeyos. Implemente una cola medieval heredando de una cola normal, pero sobrescribiendo el método encolar. 

18) **E18-dipole-sum**: Dado un dipolo de enteros, realice un algoritmo el cual sume los primeros N elementos desde el valor central hacia sus extremos, sin utilizar ninguna estructura de datos auxiliar. **Ejemplo:** Empezando desde el tope del dipolo D1:\[1, 5, 6, 7, 3] haciendo que con un n=3, la operación sea 6+5+7=18.

19) **E19-dipole-center**: Dado un dipolo, realice un algoritmo que extraiga el elemento central de la misma si el dipolo posee un número impar de elementos, o los dos elementos centrales si el dipolo posee un número par de elementos. No asuma que existe una función que retorna la cantidad de elementos del dipolo ni que posee la cantidad de elementos al comenzar el algoritmo. **Ejemplo:** Empezando desde el tope tel dipolo D1:\[5, 3, 8, 1, 6]  siendo 8 el elemento a sacar, o un D2:\[8, 9, 2, 7] siendo 9 y 2 los elementos a sacar.  

20) **E20-dipole-palindrome**: Suponga que tiene almacenado una secuencia de caracteres en un dipolo, y se desea saber si dicha secuencia es palíndromo.

21) **E21-queue-stack**: Dada una cola de enteros positivos se desea obtener una pila que indique que elementos están en la cola seguido de las ocurrencias de este. 

22) **E22-remove-negatives**: Dada una cola de enteros, realice un algoritmo que elimine los números negativos sin cambiar los otros elementos de la cola. 
