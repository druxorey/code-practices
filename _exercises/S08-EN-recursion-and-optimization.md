# Recursion and Optimization

1) **E01-factorial**: Build a recursive function that calculates the factorial of an integer.

2) **E02-integer-combinatorics**: Build a recursive function that calculates the combinatorial value of 2 integers.

3) **E03-recursive-fibonacci**: Given a number N, develop a recursive function that calculates the Fibonacci sequence for N.

4) **E04-base-converter**: Given a positive or zero integer (in decimal base), build a recursive algorithm that results in another integer whose value is the binary representation (in base 2) of the given value. Do the same process for base 16.

5) **E05-palindrome**: Develop a recursive function which, given an array of characters that form a word, returns true if it is a palindrome. **Example:** If the words: salas, oro, arepera are entered, it should return true.

6) **E06-sum-naturals**: Write a recursive algorithm that finds the sum of the first N natural numbers.

7) **E07-alphabet-permutations**: Develop a recursive function that, given an array of N characters or a String, prints all the permutations that can be generated with its letters. For example, given the array containing "ABC", it should print:

	"ABC"
	"ACB"
	"BAC"
	"BCA"
	"CBA"
	"CAB"

8) **E08-gcd**: Write a recursive function to calculate the greatest common divisor (g.c.d.) of two given integers by applying the recurrent properties.
   - If a > b then g.c.d.(a,b) = g.c.d.(a-b,b)
   - If a < b then g.c.d.(a,b) = g.c.d.(a,b-a)
   - If a = b then g.c.d.(a,b) = g.c.d.(b,a) = a = b

9) **E09-recursive-function**: Assuming you receive the value of n as a parameter, write a recursive function to calculate: (1 + 1/2 + 1/3 + ... + 1/n).

10) **E10-power**: Write a recursive function to calculate the power of a real number raised to a positive integer, starting from:
    - x^0 = x
    - x^n = (x*x)^(n/2) if n > 0 and is even
    - x^n = x*(x^(n-1)) if n > 0 and is odd

11) **E11-array-operations**: Given an array of N integers, design recursive algorithms that calculate:
    - The largest element in the array.
    - The sum of the elements in the array.
    - The average of all the elements in the array.
    - Verify if the array is sorted.

12) **E12-binary-search**: Develop a recursive algorithm which, given an array of integers sorted in ascending order and without repeated elements, performs a binary search for an element E indicating if it exists in the array.

13) **E13-merge-sort**: Write a recursive program that sorts an array of integers using the Merge method: the array is successively divided into two halves and when the length of each half is 2, the elements are compared and sorted. After the two halves are sorted, they are merged in order into a single array taking advantage of the fact that the halves are already sorted.

14) **E14-reverse-digits**: Write a function that reverses the digits of an integer, using operations on integers. Example: 653 to 356.

15) **E15-recursive-multiplication**: Suppose you only have a language whose arithmetic operations are +, -, /; design a recursive function which, given two real numbers A and B, returns the result of evaluating A * B.

16) **E16-parity**: Knowing that 0 is even, that is,
    - isEven(0) = true
    - isOdd(0) = false
    And the parity of any other positive integer is the opposite of the previous integer, develop the mutually recursive logical functions, isEven and isOdd, that complement each other when determining the parity of a positive integer.
