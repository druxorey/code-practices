# Recursividad y Optimización

1) **E01-factorial**: Construya una función recursiva que calcule el factorial de un número entero.

2) **E02-interger-combinatorics**: Construya una función recursiva que calcule el valor de la combinatoria de 2 números enteros.

3) **E03-recursive-fibonacci**: Dado un número N, desarrolle una función recursiva que calcule la secuencia de números de Fibonacci para N.

4) **E04-base-converter**: Dado un número entero positivo o nulo (en base decimal), construya un algoritmo recursivo que tenga por resultado otro número entero cuyo valor sea la representación en binario (en base 2) del valor dado. Haga el mismo proceso para base 16.

5) **E05-palindrome**: Elabore una función recursiva la cual dado un arreglo de caracteres que forman una palabra retorne verdadero si ésta es capicúa. **Ejemplo:** Si se ingresan las palabras: salas, oro, arepera, tiene que retornar verdadero.

6) **E06-sum-naturals**: Escriba un algoritmo recursivo que halle la suma de los primeros N números naturales.

7) **E07-gcd**: Escriba una función recursiva para calcular el máximo común divisor (m.c.d.) de dos números enteros dados aplicando las propiedades recurrentes.
   - Si a > b entonces m.c.d.(a,b) = m.c.d.(a-b,b)
   - Si a < b entonces m.c.d.(a,b) = m.c.d.(a,b-a)
   - Si a = b entonces m.c.d.(a,b) = m.c.d.(b,a) = a = b

8) **E08-recursive-function**: Asumiendo que recibe como parámetro el valor de n, escriba una función recursiva para calcular: (1 + 1/2 + 1/3 + ... + 1/n).

9) **E09-power**: Escriba una función recursiva para calcular la potencia de un número real elevado a un entero positivo, partiendo de:
    - x^0 = x
    - x^n = (x*x)^(n/2) si n > 0 y es par
    - x^n = x*(x^(n-1)) si n > 0 y es impar

10) **E10-array-operations**: Dado un arreglo de N números enteros, diseñar algoritmos recursivos que calculen:
    - El mayor elemento del arreglo.
    - La suma de los elementos del arreglo.
    - La media de todos los elementos del arreglo.
    - Verificar si el arreglo está ordenado.

11) **E11-binary-search**: Elabore un algoritmo recursivo el cual dado un arreglo de enteros ordenado en forma ascendente y sin elementos repetidos, haga una búsqueda binaria de un elemento E indicando si éste existe en el mismo.

12) **E12-merge-sort**: Escribir un programa recursivo que ordene un arreglo de enteros por el método de Mezcla: se va dividiendo el arreglo sucesivamente en dos mitades y cuando la longitud de cada mitad sea 2 se comparan los elementos y se ordenan. Después de ordenadas las dos mitades, ambas se mezclan ordenadamente en un solo arreglo aprovechando el hecho de que las mitades ya están ordenadas.

13) **E13-reverse-digits**: Escriba una función que invierta los dígitos de un número entero, empleando operaciones sobre números enteros. Ejemplo: 653 a 356.

14) **E14-recursive-multiplication**: Suponga que solo cuenta con un lenguaje cuyas operaciones aritméticas son +, -, /; diseñe una función recursiva la cual, dados dos reales A y B, retorne como resultado la evaluación de A * B.

15) **E15-parity**: Sabiendo que 0 es par, es decir,
    - EsPar(0) = true
    - EsImpar(0) = false
    Y la paridad de cualquier otro entero positivo es la opuesta que la del entero anterior, desarrolle las funciones lógicas, mutuamente recursivas, EsPar y EsImpar, que se complementen a la hora de averiguar la paridad de un entero positivo.
