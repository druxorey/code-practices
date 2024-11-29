# Backtracking

1) **E01-binary-construction**: Write a program that generates all possible binary permutations of a given number of bits. The program should print each permutation on a new line and at the end should show the total number of permutations generated. For example, for a size of 3 bits, the permutations would be: 000, 001, 010, 011, 100, 101, 110, 111. The program should use a recursive function to generate the permutations.

2) **E02-even-sum-permutations**: Generate all possible permutations of a character array of size N. Now generate the permutations of the same array, ensuring that the sum of the ASCII values at odd positions is an even number.

3) **E03-multiple-digits**: Obtain all numbers of m digits (m <= 9), all of them different from zero and different from each other, such that the number formed by the first n digits, whatever n (n <= m) is, is a multiple of n. For example, for m = 4, valid numbers include: 1236, since 1 is a multiple of 1, 12 of 2, 123 of 3, and 1236 of 4. 9872, since 9 is a multiple of 1, 98 of 2, 987 of 3, and 9872 of 4.

4) **E04-arithmetic-expressions**: Given an integer N, print all arithmetic expressions composed of the operators +, -, *, and /, and the first N natural numbers in order in which the result is equal to a given R. The order of precedence is from left to right. Example: For N=4 and R=0, some expressions could be: -1 -2 +3 * 4 = 0, +1 +2 -3 *4 = 0.

5) **E05-locked-domino**: A domino game is considered "locked" if the two pieces that allow players to participate in the game are the same, and none of them (in the case of four players) has any stone with that value. It is desired to know all the ways in which a domino game is locked.

6) **E06-knight-tour**: It is desired to indicate at least one way in which the knight piece placed in the upper right corner of a chessboard can traverse it completely, without passing through the same place twice. Also, show the moves it made. Note that the chessboard is 8 x 8 in size, and the knight moves in an "L" shape.

7) **E07-river-crossing**: A shepherd is on one side of a river with a sheep, a wolf, and a cabbage. To cross to the other side, he has a very small boat in which he can only cross accompanied by one of the three at most. Create an algorithm (based on the Backtracking technique) that finds the way for the shepherd to transport the sheep, the wolf, and the cabbage, knowing that if at any given moment he leaves the wolf and the sheep alone, the wolf will eat the sheep; and similarly, if he leaves the sheep and the cabbage alone, the sheep will eat the cabbage.

8) **E08-maze-path**: A two-dimensional N x N matrix can represent a square maze. Each position contains a non-negative integer indicating whether the cell is passable (0) or not (1). The cells (1, 1) and (n, n) correspond to the entrance and exit of the maze and are always passable. Given a matrix with a maze, the problem is to design an algorithm that finds a path, if it exists, to go from the entrance to the exit. Similarly, find the path with the minimum cost (fewer cells to traverse).

9) **E09-map-coloring**: Create an algorithm that allows coloring a world map (if possible). The way to color the map is as follows: For a color to be valid for a given country, it must be different from the one assigned to all its neighboring countries. Use the fewest possible colors. Assume there are N different countries, and you have a matrix of [1.. N, 1 .. N] of logical values, indicating whether a country is neighboring another. Colors are represented by integers.

10) **E10-pawn-jumping**: On an N x N chessboard, we consider the following game. On the board, there are white and black pawns. Starting from an initial position and making valid moves, we want to jump over all the white pawns according to the following rules:
    a. Only cross movements are allowed.
    b. Possible types of movements:
        i. Move to an empty square. Cost of length 1.
        ii. Jump over a white pawn. Cost of length 2.
        iii. Black pawns cannot be jumped over.
    Write an algorithm that determines if, given an initial position and a maximum number of moves, it is possible to jump over all the white pawns. Create the state tree, the initial call (in the main program), and the recursive call in the complete algorithm.

11) **E11-towers-of-hanoi**: Legend has it that in the great temple of Benares there is a bronze base from which three diamond rods protrude. At the moment of creation, God placed 64 gold disks on the first rod, arranged from bottom to top in decreasing order of size; this is the tower of Brahma. The priests are trying to move the stack from the first rod to the second, subject to the laws of Brahma which state that only one disk can be moved at a time, and that at no time can a larger disk be placed on a smaller one. The third rod is used to temporarily place the disks. When all the disks have been transferred, the tower, the priests, the temple, and the entire world will disappear with a crash (Original statement of the now problem of the towers of Hanoi). Develop a program with a recursive method that solves the towers of Hanoi problem for an arbitrary number of disks. The program should print the precise sequence of transferring the n disks from one rod to another.

12) **E12-eight-queens**: The 8 queens: The problem consists of placing 8 queens on a standard chessboard without any queen attacking another. In chess, a queen can attack another piece by moving any distance in squares: along the row it occupies, the column it occupies, or along the diagonal or diagonals it occupies. A standard chessboard has 8 rows and 8 columns.

13) **E13-cable-segments**: Use the backtracking technique to solve the following problem: In a hardware store, cable segments are sold. Customers often request several meters of cable, so there are always short pieces of cable left unsold. All these short pieces remain unsold in the hardware store, so it has been decided to weld all the pieces together to sell repurposed cables of 100 meters at a reasonably lower price. The hardware store owner understands that this problem is complex, as he has to take a set of cable pieces that sum exactly 100 meters. The hardware store owner turns to AYED students to solve his problem, which in summary consists of: given the lengths of each of the N existing cable pieces, indicate if it is possible to generate a 100-meter cable, and if so, know which cable segments were welded to generate one of 100 meters with the least number of welds possible, to keep costs low.

14) **E14-scalable-tower**: Define a function to determine if you can scale a tower. The tower is defined as an NxN matrix, where the outermost level corresponds to the edge of the matrix and each successive level corresponds to the inner edge of the previous one until reaching the center. At each level, a ladder is placed. To cross between adjacent levels, you must use the ladder. If you cannot find a ladder at a level, you must indicate that the tower is not scalable. The function returns **true** if it is possible to scale and **false** otherwise. Example of the level arrangement in a 3x3 matrix, the numbers represent the level:

	1 1 1 1 1
	1 2 2 2 1
	1 2 3 2 1
	1 2 2 2 1
	1 1 1 1 1
