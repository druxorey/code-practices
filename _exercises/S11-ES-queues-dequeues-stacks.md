# Queues, Dequeues and Stacks

## **E01-binary-sum**:

Dados dos enteros positivos, cuyos dígitos están almacenados en una pila, elabore un algoritmo, utilizando las primitivas del tipo PILA, que realice la suma de estos números dejando el resultado en otra pila.

**Ejemplo:**

| Entrada       | Salida  |
|---------------|---------|
| `P1: [1, 4, 5]` y `P2: [5, 3, 5]` | `P3: [6, 8, 0]` |
| `P1: [9, 9]` y `P2: [1]`           | `P3: [1, 0, 0]` |


## **E02-reverse-stack**:

Utilizando únicamente las primitivas de la clase Pila, desarrolle un procedimiento que, dada una pila `P`, la invierta. No debe utilizar estructuras auxiliares.

**Ejemplo:**

| Entrada       | Salida       |
|---------------|--------------|
| `P: [1, 2, 3]`| `P: [3, 2, 1]` |
| `P: [4, 5]`   | `P: [5, 4]`     |


## **E03-palindrome-check**:

Suponga que tiene almacenada una secuencia de caracteres en una pila, y se desea saber si dicha secuencia es un palíndromo. Proponga una solución para ello.

**Ejemplo:**

| Entrada       | Salida  |
|---------------|---------|
| `P: [r, a, d, a, r]` | `true`  |
| `P: [h, e, l, l, o]` | `false` |


## **E04-sum-elements**:

Dada una pila de enteros, realice un algoritmo que sume los primeros `N` elementos desde el fondo hacia el tope de la misma, donde `N` es el fondo, sin utilizar ninguna estructura de datos auxiliar.

**Ejemplo:**

| Entrada       | Salida |
|---------------|--------|
| `P: [1, 5, 6, 7, 3]` y `N: 3` | `16` |
| `P: [2, 4, 6, 8]` y `N: 2`    | `10` |


## **E05-polish-notation**:

La notación polaca coloca el operador delante de sus operandos. Se desea:

1. Transformar una expresión en forma normal (operando operador operando) almacenada en una lista, y almacenarla en una pila en notación polaca.
2. Elaborar un algoritmo que permita evaluar una expresión en notación polaca almacenada en una pila.

**Ejemplo:**

| Entrada       | Salida       |
|---------------|--------------|
| `Expresión: A + B` | `+ A B` |
| `Expresión: a + b / c` | `+ a / b c` |


## **E06-delete-nodes**:

Dada una pila, implemente un algoritmo para eliminar `X` nodos de la pila, dada una posición inicial `P` y un desplazamiento `d`. Este algoritmo eliminará los elementos existentes en la posición `P` y `P+d` tomadas desde el fondo de la pila.

**Ejemplo:**

| Entrada       | Salida       |
|---------------|--------------|
| `P: [1, 2, 3, 4, 5]` y `P=2, d=1` | `P: [1, 4, 5]` |
| `P: [7, 8, 9, 10]` y `P=1, d=2`   | `P: [7, 10]`   |


## **E07-average-stack**:

Dada una pila, se desea conocer el promedio de los elementos que ella almacena. Como restricción, la pila puede ser recorrida una sola vez.

**Ejemplo:**

| Entrada       | Salida |
|---------------|--------|
| `P: [1, 2, 3, 4, 5]` | `3.0` |
| `P: [10, 20, 30]`     | `20.0`|


## **E08-pair-sum**:

Dada una pila de enteros, se desea que usted retorne en la misma pila la suma de los elementos que ella almacena a pares.

**Ejemplo:**

| Entrada       | Salida       |
|---------------|--------------|
| `P: [1, 2, 3, 4, 5]` | `P: [3, 7, 5]` |
| `P: [6, 7, 8]`       | `P: [13, 8]`   |


## **E09-prefix-evaluation**:

Elabore un procedimiento que acepte como entrada una expresión aritmética simple en notación prefija y realice su evaluación.

**Ejemplo:**

| Entrada       | Salida |
|---------------|--------|
| `[* + 10 2 5]` | `60` |
| `[+ 3 4]`      | `7`  |


## **E10-array-queue**:

Proponga una representación para una cola empleando un arreglo, de manera tal que el orden de la operación encolar sea `O(1)`. Implemente el algoritmo correspondiente con el uso de su estructura.

**Ejemplo:**

| Entrada       | Salida       |
|---------------|--------------|
| `Encolar: 1`  | `Cola: [1]`  |
| `Encolar: 2`  | `Cola: [1, 2]` |


## **E11-reverse-average**:

Dada una cola, se desea conocer el promedio de los elementos que ella almacena. El programa debe imprimir el promedio y la cola de forma invertida.

**Ejemplo:**

| Entrada       | Salida       |
|---------------|--------------|
| `Cola: [1, 2, 3, 4]` | `Promedio: 2.5` y `Cola: [4, 3, 2, 1]` |
| `Cola: [5, 10]`       | `Promedio: 7.5` y `Cola: [10, 5]`     |


## **E12-min-max**:

Dada una cola de enteros, realice un algoritmo que muestre el elemento mayor y el menor.

**Ejemplo:**

| Entrada       | Salida       |
|---------------|--------------|
| `Cola: [1, 2, 3, 4, 5]` | `Mayor: 5, Menor: 1` |
| `Cola: [10, 20, 5]`      | `Mayor: 20, Menor: 5` |


## **E13-stack-simulation**:

Realice un algoritmo que simule una pila mediante una cola y realice la suma de los elementos de dicha “pila”. Implemente también simulando una cola a través de una pila.

**Ejemplo:**

| Entrada       | Salida       |
|---------------|--------------|
| `Cola: [1, 2, 3]` | `Suma: 6` |
| `Pila: [4, 5]`    | `Suma: 9` |


## **E14-reverse-dipole**:

Realice un algoritmo que, dada una palabra almacenada en un dipolo, produzca otra nueva en otro dipolo que sea el resultado de invertirla.

**Ejemplo:**

| Entrada       | Salida   |
|---------------|----------|
| `dipolo = [a, b, c]` | `dipolo = [c, b, a]` |
| `dipolo = [x, y, z]` | `dipolo = [z, y, x]` |


## **E15-undo-and-redo**:

Proponga una estructura de datos que permita implementar fácilmente un mecanismo de rehacer y deshacer eventos en un sistema.

**Ejemplo:**

| Acción        | Estado Actual |
|---------------|---------------|
| `Escribir A`  | `A`           |
| `Escribir B`  | `AB`          |
| `Deshacer`    | `A`           |
| `Rehacer`     | `AB`          |


## **E16-queue-decimal-binary**:

Dado un número decimal almacenado en una pila, implemente un algoritmo para convertirlo a binario y dar el resultado en una cola.

**Ejemplo:**

| Entrada       | Salida       |
|---------------|--------------|
| `pila = [36]` | `cola = [1, 0, 0, 1, 0, 0]` |
| `pila = [5]`  | `cola = [1, 0, 1]`          |


## **E17-medieval-queue**:

Una cola medieval se comporta como una cola ordinaria, con la única diferencia de que los elementos almacenados en ella se dividen en dos grupos: nobles y plebeyos. Dentro de cada grupo, los elementos deben ser atendidos en orden de llegada; pero siempre que haya nobles en la cola, estos deben ser atendidos antes que los plebeyos.

Implemente una cola medieval heredando de una cola normal, pero sobrescribiendo el método encolar.

**Ejemplo:**

| Entrada       | Salida       |
|---------------|--------------|
| `cola = [plebeyo1, noble1, plebeyo2, noble2]` | `noble1, noble2, plebeyo1, plebeyo2` |
| `cola = [noble1, plebeyo1, plebeyo2]`         | `noble1, plebeyo1, plebeyo2`         |


## **E18-dipole-sum**:

Dado un dipolo de enteros, realice un algoritmo que sume los primeros N elementos desde el valor central hacia sus extremos, sin utilizar ninguna estructura de datos auxiliar.

**Ejemplo:**

| Entrada       | Salida |
|---------------|--------|
| `dipolo = [1, 5, 6, 7, 3], n = 3` | `18` (6 + 5 + 7) |
| `dipolo = [2, 4, 6, 8, 10], n = 2` | `10` (6 + 4)     |


## **E19-dipole-center**:

Dado un dipolo, realice un algoritmo que extraiga el elemento central si el dipolo posee un número impar de elementos, o los dos elementos centrales si el dipolo posee un número par de elementos.

**Ejemplo:**

| Entrada       | Salida       |
|---------------|--------------|
| `dipolo = [5, 3, 8, 1, 6]` | `8`          |
| `dipolo = [8, 9, 2, 7]`    | `9, 2`       |


## **E20-dipole-palindrome**:

Suponga que tiene almacenada una secuencia de caracteres en un dipolo, y se desea saber si dicha secuencia es un palíndromo.

**Ejemplo:**

| Entrada       | Salida |
|---------------|--------|
| `dipolo = [a, b, b, a]` | `true` |
| `dipolo = [r, a, d, a, r]` | `true` |
| `dipolo = [h, e, l, l, o]` | `false` |


## **E21-queue-stack**:

Dada una cola de enteros positivos, se desea obtener una pila que indique qué elementos están en la cola seguido de las ocurrencias de estos.

**Ejemplo:**

| Entrada       | Salida       |
|---------------|--------------|
| `cola = [1, 2, 2, 3]` | `pila = [1, 1, 2, 2, 3, 1]` |
| `cola = [4, 4, 5]`    | `pila = [4, 2, 5, 1]`       |


## **E22-remove-negatives**:

Dada una cola de enteros, realice un algoritmo que elimine los números negativos sin cambiar los otros elementos de la cola.

**Ejemplo:**

| Entrada       | Salida       |
|---------------|--------------|
| `cola = [1, -2, 3, -4]` | `cola = [1, 3]` |
| `cola = [-1, -2, 3]`    | `cola = [3]`    |


## **E23-valid-parentheses**:

Dada una cadena `s` que contiene únicamente los caracteres `(`, `)`, `{`, `}`, `[` y `]`, determine si la cadena de entrada es válida.

Una cadena es válida si:

- Los paréntesis abiertos deben cerrarse con el mismo tipo de paréntesis.
- Los paréntesis abiertos deben cerrarse en el orden correcto.
- Cada paréntesis de cierre tiene un paréntesis de apertura correspondiente del mismo tipo.

**Ejemplo:**

| Entrada       | Salida |
|---------------|--------|
| `s = "()"`    | `true` |
| `s = "()[]{}"`| `true` |
| `s = "(]"`    | `false`|
| `s = "([])"`  | `true` |

