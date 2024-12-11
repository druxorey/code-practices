# Recursividad y Optimización

1) **E01-factorial**: Construya una función recursiva que calcule el factorial de un número entero.

2) **E02-combinatorics**: Construya una función recursiva que calcule el valor de la combinatoria de 2 números enteros.

3) **E03-recursive-fibonacci**: Dado un número N, desarrolle una función recursiva que calcule la secuencia de números de Fibonacci para N.

4) **E04-base-converter**: Dado un número entero positivo o nulo (en base decimal), construya un algoritmo recursivo que tenga por resultado otro número entero cuyo valor sea la representación en binario (en base 2) del valor dado. Haga el mismo proceso para base 16.

5) **E05-palindrome**: Elabore una función recursiva la cual dado un arreglo de caracteres que forman una palabra retorne verdadero si ésta es capicúa. **Ejemplo:** Si se ingresan las palabras: salas, oro, arepera, tiene que retornar verdadero.

6) **E06-sum-naturals**: Escriba un algoritmo recursivo que halle la suma de los primeros N números naturales.

7) **E07-alphabet-permutations**: Desarrolle una función recursiva que dada un arreglo de caracteres de N posiciones o un String, imprima por pantalla todas las permutaciones que se puedan generar con sus letras. Por ejemplo, dado el arreglo que contiene "ABC", debería imprimir:

	"ABC"
	"ACB"
	"BAC"
	"BCA"
	"CBA"
	"CAB"

8) **E08-gcd**: Escriba una función recursiva para calcular el máximo común divisor (m.c.d.) de dos números enteros dados aplicando las propiedades recurrentes.
   - Si a > b entonces m.c.d.(a,b) = m.c.d.(a-b,b)
   - Si a < b entonces m.c.d.(a,b) = m.c.d.(a,b-a)
   - Si a = b entonces m.c.d.(a,b) = m.c.d.(b,a) = a = b

9) **E09-harmonic-series**: Asumiendo que recibe como parámetro el valor de n, escriba una función recursiva para calcular: (1 + 1/2 + 1/3 + ... + 1/n).

10) **E10-power**: Escriba una función recursiva para calcular la potencia de un número real elevado a un entero positivo, partiendo de:
    - x^0 = x
    - x^n = (x*x)^(n/2) si n > 0 y es par
    - x^n = x*(x^(n-1)) si n > 0 y es impar

11) **E11-array-operations**: Dado un arreglo de N números enteros, diseñar algoritmos recursivos que calculen:
    - El mayor elemento del arreglo.
    - La suma de los elementos del arreglo.
    - La media de todos los elementos del arreglo.
    - Verificar si el arreglo está ordenado.

12) **E12-binary-search**: Elabore un algoritmo recursivo el cual dado un arreglo de enteros ordenado en forma ascendente y sin elementos repetidos, haga una búsqueda binaria de un elemento E indicando si éste existe en el mismo.

13) **E13-merge-sort**: Escribir un programa recursivo que ordene un arreglo de enteros por el método de Mezcla: se va dividiendo el arreglo sucesivamente en dos mitades y cuando la longitud de cada mitad sea 2 se comparan los elementos y se ordenan. Después de ordenadas las dos mitades, ambas se mezclan ordenadamente en un solo arreglo aprovechando el hecho de que las mitades ya están ordenadas.

14) **E14-reverse-digits**: Escriba una función que invierta los dígitos de un número entero, empleando operaciones sobre números enteros. Ejemplo: 653 a 356.

15) **E15-recursive-multiplication**: Suponga que solo cuenta con un lenguaje cuyas operaciones aritméticas son +, -, /; diseñe una función recursiva la cual, dados dos reales A y B, retorne como resultado la evaluación de A * B.

16) **E16-parity**: Sabiendo que 0 es par, es decir,
    - esPar(0) = true
    - esImpar(0) = false
    Y la paridad de cualquier otro entero positivo es la opuesta que la del entero anterior, desarrolle las funciones lógicas, mutuamente recursivas, esPar y esImpar, que se complementen a la hora de averiguar la paridad de un entero positivo.

17) **E17-recursive-equation**: Cuenta con una operación definida de la siguiente forma: a + b * c / d = x. Dado un "x" y un arreglo que contiene los valores no duplicados a ser utilizados en la fórmula, encuentre los valores de: a, b, c y d para que se cumpla la operación. En una fórmula válida: a, b, c y d tienen valores distintos. Suponga que el tamaño del arreglo es mayor a cuatro. Todas las variables son de tipo entero.
