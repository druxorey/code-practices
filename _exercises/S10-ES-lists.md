# Lists

1) **E01-remove-number**: Dada una lista con arreglos de enteros y número entero n, implementar una función donde se eliminen todos los números n de la lista.

2) **E02-mix-lists**: Implementar una función `mixLists()` que tenga como parámetros dos listas con enteros ordenados de menor a mayor y que devuelva una nueva lista con la unión de ambas listas anteriores con sus elementos ordenados de la misma forma.

3) **E03-circular-list**: Implemente una lista que simule una lista circular de caracteres con n posiciones y dados dos enteros m e i, imprima m valores a partir de la posición i.

4) **E04-recursive-sum**: Construir una función que sume los elementos de una lista con arreglos de manera recursiva, donde el algoritmo sea llamado: `arrayListSize()` y que este divida entre 2 entre cada iteración.

5) **E05-sum-list**: Realice una función `sumList()` que retorne la suma de todos los elementos de una lista dada por parámetro.

6) **E06-reorder-list**: Implemente una función `reorderList()` que tome una lista simplemente enlazada y la reordene de la siguiente manera: el primer elemento va seguido del último, luego el segundo elemento va seguido del penúltimo, y así sucesivamente. **Ejemplo:** Si la lista original es \[1, 2, 3, 4, 5\], la lista reordenada sería \[1, 5, 2, 4, 3\].

7) **E07-even-odd**: Dada una lista de números enteros ordenada ascendentemente, realice una función que retorne una lista con los elementos pares al comienzo de la lista y los impares al final (De manera ordenada igualmente).

8) **E08-remove-duplicates**: Cree una función que elimine de una lista simplemente enlazada de enteros, los valores repetidos.

9) **E09-palindrome**: Dada una lista enlazada simple, implemente la operación `isPalindrome()`, la cual verifica si una secuencia de caracteres almacenada en la lista es palíndromo o no.

10) **E10-unique-count**: Dada una lista A (desordenada y con elementos repetidos) se quiere que usted resuelva de manera eficiente el siguiente requerimiento: Obtener una lista B que contenga los elementos que están en A sin repeticiones, seguidos por el número de ocurrencias. Resuelva el problema utilizando manejo de apuntadores. La lista A puede ser modificada.

11) **E11-reverse-list**: Elabore dos algoritmos (uno recursivo y otro iterativo) en el cual dada una lista lineal en forma enlazada la invierta, sin crear una nueva lista, ni mover los elementos físicamente de la lista.

12) **E12-sum-previous**: Implemente una función que recibe una lista circular doblemente enlazada por parámetro y un entero “n” y retorne el resultado de sumar el elemento anterior de la lista al elemento actual n veces de la siguiente manera:

	- Dada L = {1, 4, 3, 2, 3} y n = 2
	- Iteración 1: {4, 5, 8, 10, 13}
	- Iteración 2: {17, 22, 30, 40, 53}
	- Retorna L= {17, 22, 30, 40, 53}

13) **E13-remove-nodes**: Dada una lista circular, implemente:

a) Un método que dada una posición lógica inicial P >= 1 y un desplazamiento d >= 0, elimine el elemento que ésta en la posición P + d de la lista circular. Calcule el orden en tiempo de ejecución de su algoritmo.

b) Un método que utilice el algoritmo anterior para eliminar X nodos de la lista, dada una posición lógica inicial P y un desplazamiento d. Cabe destacar que una vez que la posición P se haya desplazado d posiciones, la próxima eliminación debe tomar como posición inicial dicha posición actual P + d.
