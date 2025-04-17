# Acciones Elementales

## **E01-legal-data**:

Escriba un programa que solicite al usuario que ingrese los siguientes datos legales: nombre completo (string), edad (int), género (char), altura en metros (float/double), peso en kilogramos (float/double) y si está casado (valor booleano). Luego, el programa debe imprimir cada uno de estos valores en una nueva línea.

## **E02-inverted-number**:

Escriba un algoritmo que lea un número de cuatro dígitos y muestre en pantalla el número escrito en reverso.

**Ejemplo:**

| Entrada  | Salida |
|----------|--------|
| `4678`   | `8764` |
| `1234`   | `4321` |
| `1000`   | `0001` |
| `9876`   | `6789` |


## **E03-four-bit-decimal**:

Escriba un algoritmo que transforme un número binario de cuatro bits a un número decimal. **Nota:** Asegúrese de que el dato ingresado sea un número entero, no caracteres.

**Ejemplo:**

| Entrada  | Salida |
|----------|--------|
| `1011`   | `11`   |
| `0001`   | `1`    |
| `1111`   | `15`   |
| `0100`   | `4`    |


## **E04-quadratic-roots**:

Escriba un algoritmo que reciba como entrada los coeficientes **a**, **b** y **c** de una ecuación de segundo grado `(ax² + bx + c = 0)`, e imprima por pantalla los valores de x. Asuma que la ecuación siempre tiene solución en números reales.

**Ejemplo:**

| Entrada                  | Salida         |
|--------------------------|----------------|
| `a = 1, b = -3, c = 2`   | `x1 = 2, x2 = 1` |
| `a = 1, b = -2, c = 1`   | `x1 = 1, x2 = 1` |
| `a = 2, b = 5, c = 3`    | `x1 = -1, x2 = -1.5` |


## **E05-clock-angle**:

Supongamos un reloj analógico (de agujas). Dada la hora exacta (horas y minutos), escriba un algoritmo que calcule el ángulo entre ambas agujas.

**Ejemplo:**

| Entrada       | Salida       |
|---------------|--------------|
| `hora = 3:00` | `90 grados`  |
| `hora = 3:15` | `7.5 grados` |
| `hora = 6:00` | `180 grados` |
| `hora = 12:00`| `0 grados`   |


## **E06-frog-jumps**:

José y Pedro son dos ranas. José puede dar saltos de J centímetros y Pedro puede dar saltos de P centímetros. Suponiendo que ambas ranas comienzan a saltar en el mismo punto (y en la misma dirección), haga un algoritmo que determine si las ranas coincidirán en el mismo punto en algún momento antes de que José dé K saltos. Si coinciden, determine el primer punto de encuentro.

**Ejemplo:**

| Entrada                          | Salida                  |
|----------------------------------|-------------------------|
| `J = 3, P = 5, K = 10`           | `Coinciden en 15`       |
| `J = 2, P = 4, K = 5`            | `No coinciden`          |
| `J = 6, P = 9, K = 15`           | `Coinciden en 18`       |


## **E07-line-intersection**:

Dadas las ecuaciones de dos rectas no paralelas `y = m1x+b1` y `y = m2x+b2`, escribir un algoritmo que calcule su punto de intersección.

**Ejemplo:**

| Entrada                          | Salida                |
|----------------------------------|-----------------------|
| `m1 = 2, b1 = 3, m2 = -1, b2 = 1`| `(x = -2/3, y = 5/3)` |
| `m1 = 1, b1 = 0, m2 = -1, b2 = 2`| `(x = 1, y = 1)`      |


## **E08-multiplication-table**:

Escribe un programa que muestre la tabla de multiplicar de un número ingresado por el usuario.

**Ejemplo:**

| Entrada | Salida               |
|---------|----------------------|
| `5`     | `5x1=5, 5x2=10,...` |
| `3`     | `3x1=3, 3x2=6,...`  |


## **E09-pirate-coordinates**:

Luego de un accidente marítimo un náufrago se despierta en una isla desierta, al hacer un recorrido por ella encuentra una botella con un pergamino, donde se lee la siguiente frase: "Si descifras el mensaje oculto encontrarás la manera de salir de este lugar", en el reverso de del mismo están escritos 3 números de 4 cifras. Al pasar unos minutos el náufrago descubre en el pergamino un plano cartesiano y una frase escrita con una tinta especial que se revela al tener contacto con el agua. Dicha frase decía lo siguiente: "En el centro del triángulo encontrarás la respuesta". Al terminar de leer esta información se da cuenta que al separar los números anteriores en pares (x, y) y dibujar los mismos en el plano unidos con líneas se formará un triángulo, dejando solo el cálculo del centroide del mismo para tener el punto en la isla donde se encuentra el misterioso secreto. Se requiere que realicen un programa que simula el proceso de descifrado del mensaje, leyendo los 3 números, y dando como salida la coordenada del centroide.

**Ejemplo:**

| Entrada                  | Salida       |
|--------------------------|--------------|
| `1234, 5678, 9101`       | `(53, 38)`   |
| `1111, 2222, 3333`       | `(22, 22)`   |


## **E10-cylindrical-conversion**:

Diseñar un programa que dadas las coordenadas cartesianas (x, y, z) de un punto en el espacio, calcule y muestre sus coordenadas cilíndricas y sus coordenadas esféricas.

**Ejemplo:**

| Entrada          | Salida                              |
|------------------|-------------------------------------|
| `(3, 3, 4)`      | `Cilíndricas: (4.24, 0.78, 4)`      |
|                  | `Esféricas: (5.83, 0.78, 46.69)`    |


## **E11-segment-length**:

Diseñe un programa que dados dos puntos en el plano por sus coordenadas (x1, y1) y (x2, y2) calcule y muestre la longitud del segmento que determinan estos puntos, y que se calculen y muestren las coordenadas del punto medio de ese segmento. **Nota**: Asuma que el primer punto siempre será menor que el segundo.

**Ejemplo:**

| Entrada                  | Salida                     |
|--------------------------|----------------------------|
| `(1, 2), (4, 6)`         | `Longitud: 5, Medio: (2, 4)` |
| `(0, 0), (3, 4)`         | `Longitud: 5, Medio: (1.5, 2)` |


## **E12-seconds-conversion**:

Diseñe un programa que dada una cantidad de segundos, entera y positiva, indique a cuánto equivale en años, meses, días, horas y segundos. Asuma años de 360 días y simplifique a que todos los meses poseen 30 días.

**Ejemplo:**

| Entrada       | Salida                                |
|---------------|---------------------------------------|
| `31803310`    | `1 año, 3 días, 2 horas, 15 minutos, 10 segundos` |
| `86400`       | `1 día, 0 horas, 0 minutos, 0 segundos` |


## **E13-mirror-time**:

Hacer un programa que, dada una hora en el espejo, devuelva la hora real.

**Ejemplo:**

| Entrada       | Salida       |
|---------------|--------------|
| `8:05`        | `3:55`       |
| `6:30`        | `5:30`       |
| `12:00`       | `12:00`      |

