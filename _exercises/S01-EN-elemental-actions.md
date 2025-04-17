# Elemental Actions

## **E01-legal-data**:

Write a program that asks the user to input the following legal data: full name (string), age (int), gender (char), height in meters (float/double), weight in kilograms (float/double), and marital status (boolean value). Then, the program must print each of these values on a new line.

## **E02-inverted-number**:

Write an algorithm that reads a four-digit number and displays the number written in reverse.

**Example:**

| Input  | Output |
|--------|--------|
| `4678` | `8764` |
| `1234` | `4321` |
| `1000` | `0001` |
| `9876` | `6789` |


## **E03-four-bit-decimal**:

Write an algorithm that converts a four-bit binary number into a decimal number. **Note:** Ensure that the input is an integer, not characters.

**Example:**

| Input  | Output |
|--------|--------|
| `1011` | `11`   |
| `0001` | `1`    |
| `1111` | `15`   |
| `0100` | `4`    |


## **E04-quadratic-roots**:

Write an algorithm that takes as input the coefficients **a**, **b**, and **c** of a quadratic equation `(ax² + bx + c = 0)` and prints the values of x. Assume the equation always has real-number solutions.

**Example:**

| Input                  | Output         |
|------------------------|----------------|
| `a = 1, b = -3, c = 2` | `x1 = 2, x2 = 1` |
| `a = 1, b = -2, c = 1` | `x1 = 1, x2 = 1` |
| `a = 2, b = 5, c = 3`  | `x1 = -1, x2 = -1.5` |


## **E05-clock-angle**:

Suppose an analog clock (with hands). Given the exact time (hours and minutes), write an algorithm that calculates the angle between the two hands.

**Example:**

| Input         | Output       |
|---------------|--------------|
| `time = 3:00` | `90 degrees` |
| `time = 3:15` | `7.5 degrees`|
| `time = 6:00` | `180 degrees`|
| `time = 12:00`| `0 degrees`  |


## **E06-frog-jumps**:

José and Pedro are two frogs. José can jump J centimeters, and Pedro can jump P centimeters. Assuming both frogs start jumping from the same point (and in the same direction), write an algorithm to determine if the frogs will meet at the same point at any time before José makes K jumps. If they meet, determine the first meeting point.

**Example:**

| Input                          | Output                  |
|--------------------------------|-------------------------|
| `J = 3, P = 5, K = 10`         | `Meet at 15`           |
| `J = 2, P = 4, K = 5`          | `Do not meet`          |
| `J = 6, P = 9, K = 15`         | `Meet at 18`           |


## **E07-line-intersection**:

Given the equations of two non-parallel lines `y = m1x+b1` and `y = m2x+b2`, write an algorithm that calculates their intersection point.

**Example:**

| Input                          | Output                |
|--------------------------------|-----------------------|
| `m1 = 2, b1 = 3, m2 = -1, b2 = 1`| `(x = -2/3, y = 5/3)` |
| `m1 = 1, b1 = 0, m2 = -1, b2 = 2`| `(x = 1, y = 1)`      |


## **E08-multiplication-table**:

Write a program that displays the multiplication table of a number entered by the user.

**Example:**

| Input | Output               |
|-------|----------------------|
| `5`   | `5x1=5, 5x2=10,...` |
| `3`   | `3x1=3, 3x2=6,...`  |


## **E09-pirate-coordinates**:

After a maritime accident, a castaway wakes up on a deserted island. While exploring, they find a bottle with a scroll inside, which reads: "If you decipher the hidden message, you will find a way to leave this place." On the back of the scroll, three 4-digit numbers are written. After a few minutes, the castaway discovers a Cartesian plane on the scroll and a phrase written in special ink that reveals itself when in contact with water. The phrase says: "At the center of the triangle, you will find the answer." After reading this, they realize that separating the numbers into pairs (x, y) and plotting them on the plane, connected by lines, forms a triangle. The task is to calculate the centroid of the triangle to find the point on the island where the mysterious secret lies. Write a program that simulates the process of deciphering the message, reading the 3 numbers, and outputting the centroid coordinates.

**Example:**

| Input                  | Output       |
|------------------------|--------------|
| `1234, 5678, 9101`     | `(53, 38)`   |
| `1111, 2222, 3333`     | `(22, 22)`   |


## **E10-cylindrical-conversion**:

Design a program that, given the Cartesian coordinates (x, y, z) of a point in space, calculates and displays its cylindrical and spherical coordinates.

**Example:**

| Input          | Output                              |
|----------------|-------------------------------------|
| `(3, 3, 4)`    | `Cylindrical: (4.24, 0.78, 4)`      |
|                | `Spherical: (5.83, 0.78, 46.69)`    |


## **E11-segment-length**:

Design a program that, given two points in the plane by their coordinates (x1, y1) and (x2, y2), calculates and displays the length of the segment determined by these points and the coordinates of the midpoint of that segment. **Note:** Assume the first point is always smaller than the second.

**Example:**

| Input                  | Output                     |
|------------------------|----------------------------|
| `(1, 2), (4, 6)`       | `Length: 5, Midpoint: (2, 4)` |
| `(0, 0), (3, 4)`       | `Length: 5, Midpoint: (1.5, 2)` |


## **E12-seconds-conversion**:

Design a program that, given a positive integer number of seconds, indicates how many years, months, days, hours, and seconds it is equivalent to. Assume years have 360 days and simplify all months to have 30 days.

**Example:**

| Input       | Output                                |
|-------------|---------------------------------------|
| `31803310`  | `1 year, 3 days, 2 hours, 15 minutes, 10 seconds` |
| `86400`     | `1 day, 0 hours, 0 minutes, 0 seconds` |


## **E13-mirror-time**:

Write a program that, given a time seen in a mirror, returns the real time.

**Example:**

| Input       | Output       |
|-------------|--------------|
| `8:05`      | `3:55`       |
| `6:30`      | `5:30`       |
| `12:00`     | `12:00`      |

