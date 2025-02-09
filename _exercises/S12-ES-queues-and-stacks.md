# Queues and Stacks

1) **E01-binary-sum**: Dados dos enteros positivos, cuyos dígitos están almacenados en una pila, elabore un algoritmo, utilizando las primitivas del tipo PILA, que realice la suma de estos números dejando el resultado en otra pila. **Ejemplo:** Sea P1:[1, 4, 5] + P2:[5, 3, 5] = P3:[6, 8, 0].

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

8) **E08-pair-sum**: Dada una pila de enteros, se desea que usted retorne en la misma pila, la suma de los elementos que ella almacena a pares. **Ejemplo:** Sea P con los datos [1, 2, 3, 4, 5]. Al aplicar el dicho algoritmo sobre P, debe retornar P:[3,7,5]. No debe utilizar ninguna estructura auxiliar. 
