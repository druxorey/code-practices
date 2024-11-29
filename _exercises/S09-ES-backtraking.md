# Backtracking

1) **E01-binary-construction**: Escriba un programa que genere todas las permutaciones binarias posibles de un número dado de bits. El programa debe imprimir cada permutación en una nueva línea y al final debe mostrar el número total de permutaciones generadas. Por ejemplo, para un tamaño de 3 bits, las permutaciones serían: 000, 001, 010, 011, 100, 101, 110, 111. El programa debe utilizar una función recursiva para generar las permutaciones.

2) **E02-even-sum-permutations**: Genere todas las permutaciones posibles de un arreglo de caracteres de tamaño N. Ahora genere las permutaciones del mismo arreglo, asegurando que la suma del valor ASCII en las posiciones impares sea un número par.

3) **E03-multiple-digits**: Obtener todos los números de m cifras (m <= 9), todas ellas distintas de cero y distintas entre sí, de tal manera que el número formado por las primeras n cifras, cualquiera que sea n (n <= m) sea múltiplo de n. Por ejemplo, para m = 4 son números válidos, entre otros, los siguientes: 1236, ya que 1 es múltiplo de 1, 12 de 2, 123 de 3 y 1236 de 4. 9872, pues 9 es múltiplo de 1, 98 de 2, 987 de 3 y 9872 de 4.

4) **E04-arithmetic-expressions**: Dado un entero N, imprimir todas las expresiones aritméticas compuestas por los operadores +, -, *, y /, y los primeros N números naturales en orden en la cual el resultado sea igual a un R dado. El orden de prioridad es de izquierda a derecha. Ejemplo: Para N=4 y R=0, algunas expresiones podrían ser: -1 -2 +3 * 4 = 0, +1 +2 -3 * 4 = 0.

5) **E05-locked-domino**: Un juego de dominó se considera “trancado” si las dos piezas que permiten a los jugadores participar en el juego son iguales, y ninguno de ellos (en el caso de cuatro jugadores) posee ninguna piedra que tenga ese valor. Se desea conocer todas las formas en las cuales un juego de dominó está trancado.

6) **E06-knight-tour**: Se desea que indique al menos una forma en la cual la pieza de caballo colocada en la esquina superior derecha de un tablero de ajedrez puede recorrerlo completo, sin pasar dos veces por el mismo lugar. Además, muestre los movimientos que hizo. Tenga en cuenta que el tablero de ajedrez es de tamaño 8 x 8, y el caballo se mueve en forma de “L”.

7) **E07-river-crossing**: Un pastor se encuentra en una orilla de un río con una oveja, un lobo y una col. Para pasar a la otra orilla dispone de una barca muy pequeña en la que no puede cruzar más que acompañado como máximo por uno de los tres. Realice un algoritmo (basado en la técnica de Backtracking) que encuentre el modo para que el pastor pueda trasladar a la oveja, al lobo y la col, sabiendo que si en un momento dado deja solos al lobo y la oveja, éste se la comerá; y del mismo modo, si las dejara solas, la oveja se comería a la col.

8) **E08-maze-path**: Una matriz bidimensional N x N puede representar un laberinto cuadrado. Cada posición contiene un entero no negativo que indica si la casilla es transitable (0) o si no lo es (1). Las casillas (1, 1) y (n, n) corresponden a la entrada y salida del laberinto y siempre son transitables. Dada una matriz con un laberinto, el problema consiste en diseñar un algoritmo que encuentre un camino, si existe, para ir de la entrada a la salida. Del mismo modo, consiga el camino de costo mínimo (menos casillas que recorrer).

9) **E09-map-coloring**: Realice un algoritmo que permita colorear un mapamundi (en caso de ser posible). La manera de colorear el mapa es la siguiente: Para que un color sea válido para un determinado país debe ocurrir que sea distinto del que tienen asignado todos sus países limítrofes. Debe utilizar la menor cantidad de colores posibles. Asuma que existen N países distintos, y que cuenta con una matriz de [1.. N, 1 .. N] de lógico, que indica si un país es limítrofe de otros. Los colores se representan mediante enteros.

10) **E10-pawn-jumping**: En un tablero de ajedrez de dimensiones N x N consideramos el siguiente juego. En el tablero hay colocados peones blancos y negros. Partiendo de una posición inicial y realizando movimientos válidos deseamos saltar todos los peones blancos de acuerdo con las siguientes reglas:
    a. Solo se permiten movimientos en cruz.
    b. Tipos de movimientos posibles:
        i. Movimiento a una casilla vacía. Coste de longitud 1.
        ii. Salto de un peón blanco. Coste de longitud 2.
        iii. No se pueden saltar peones negros.
    Escriba un algoritmo que determine si dada una posición inicial y un número máximo de movimientos, es posible saltar a todos los peones blancos. Realice el árbol de estados creados, la llamada inicial (en el programa principal) y la llamada recursiva en el algoritmo completo.

11) **E11-towers-of-hanoi**: Cuenta la leyenda que en el gran templo de Benarés existe una base de bronce de la que sobresalen tres varillas de diamante. En el momento de la creación, Dios colocó 64 discos de oro ensartados en la primera varilla, colocados de abajo arriba en orden de tamaño decreciente; esta es la torre de Brahma. Los sacerdotes están tratando de pasar la pila de la primera varilla a la segunda, sometidos a las leyes de Brahma que indican que sólo se puede mover un disco a la vez, y que en ningún momento se puede colocar un disco más grande sobre uno más pequeño. Se cuenta con la tercera varilla para colocar los discos temporalmente. Cuando todos los discos hayan sido transferidos, la torre, los sacerdotes, el templo, y todo el mundo desaparecerá con un estruendo (Enunciado original del hoy problema de las torres de Hanoi). Desarrolle un programa con un método recursivo que solucione el problema de las torres de Hanoi para un número arbitrario de discos. El programa debe imprimir la secuencia precisa de transferencia de los n discos de una varilla a otra.

12) **E12-eight-queens**: Las 8 reinas: El problema consiste en colocar en un tablero de ajedrez normal 8 reinas sin que alguna ataque a las demás. En el ajedrez, una reina puede atacar a otra pieza desplazándose cualquier distancia en casillas: sobre la fila que ocupa, la columna que ocupa o bien sobre la diagonal o las diagonales que ocupa. Un tablero de ajedrez normal tiene 8 filas y 8 columnas.

13) **E13-cable-segments**: Utilice la técnica de backtracking para resolver el siguiente problema: En una ferretería se venden segmentos de cable. Los clientes suelen pedir varios metros de cable, por lo que siempre quedan pedazos cortos de cable sin vender. Todos esos pedazos cortos van quedando sin ser vendidos en la ferretería, por lo que se ha decidido soldar todos los pedazos para vender cables repotenciados de 100 metros, a un precio razonablemente menor. El ferretero entiende que este problema es complejo, pues tiene que tomar un conjunto de pedazos de cable que sumen exactamente 100 metros. El ferretero recurre a los estudiantes de AYED para que le resuelvan su problema, que en resumen consiste en: dada las longitudes de cada uno de los N pedazos de cable existentes, indicar si se puede generar un cable de 100 metros, y en dado caso, saber qué segmentos de cable se soldaron para generar uno de 100 metros con la menor cantidad de soldaduras posibles, para mantener los bajos costos.

14) **E14-scalable-tower**: Defina una función con la que determine si puede escalar una torre. La torre está definida como una matriz de NxN, donde el nivel más externo corresponde con el borde de la matriz y cada nivel sucesivo corresponde con el borde interno del previo hasta alcanzar el centro de la misma. En cada nivel estará dispuesta una escalera. Para poder cruzar entre niveles adyacentes debe utilizar la escalera. Si al buscar una escalera en un nivel, no puede conseguir debe indicar que la torre no es escalable. La función retorna **true** en caso de poder escalar y **false** en caso contrario. Ejemplo de la disposición de niveles en una matriz de 3x3, los números representan el nivel:

	1 1 1 1 1
	1 2 2 2 1
	1 2 3 2 1
	1 2 2 2 1
	1 1 1 1 1
