# Queues and Stacks

1) **E01-binary-sum**: Given two positive integers, whose digits are stored in a stack, develop an algorithm using stack primitives to sum these numbers, leaving the result in another stack. **Example:** Let P1:[1, 4, 5] + P2:[5, 3, 5] = P3:[6, 8, 0].

2) **E02-reverse-stack**: Using only the primitives of the Stack class, develop a procedure that given a stack P, reverses it. No auxiliary structures should be used.

3) **E03-palindrome-check**: Suppose you have a sequence of characters stored in a stack, and you want to know if this sequence is a palindrome. Propose a solution for this.

4) **E04-sum-elements**: Given a stack of integers, develop an algorithm that sums the first N elements from the bottom to the top of the stack, where N is the bottom, without using any auxiliary data structures. **Example:** For the stack from top to bottom [1, 5, 6, 7, 3], with n=3, the calculation would be 3+7+6=16.

5) **E05-polish-notation**: Polish notation is named after the famous Polish mathematician Jan Lukasiewicz, and it is based on placing the operator symbol before its operands. Assuming all operators to work with are binary, it is desired that:

   - Transform a normal expression (operand operator operand) stored in a list into a stack in Polish notation. Assume the input expression may have parentheses.
   - Develop an algorithm to evaluate a Polish notation expression stored in a stack.

   Examples of Polish notations:
   - `+ A B`, which is equivalent to `A + B`;
   - `+ a / b c`, which is equivalent to `a + b/c`.

6) **E06-delete-nodes**: Given a stack, implement an algorithm to delete X nodes from the stack, given an initial position P and an offset d. This algorithm will delete the elements at positions P and P+d taken from the bottom of the stack.

7) **E07-average-stack**: Given a stack, it is desired to know the average of the elements it stores. As a restriction, the stack can only be traversed once.

8) **E08-pair-sum**: Given a stack of integers, it is desired that you return in the same stack, the sum of the elements it stores in pairs. **Example:** Let P with the data [1, 2, 3, 4, 5]. Applying the algorithm on P should return P:[3,7,5]. No auxiliary structures should be used.

9) **E09-prefix-evaluation**: Develop a procedure that accepts a simple arithmetic expression (sequence of numbers and arithmetic operators: (+, -, \n*, /)) as input. Evaluate the expression. Consider that the arithmetic expression is given in prefix notation. Choose between the classes Stack, Queue, List, Dipole to represent the expression and implement the operations in terms of the primitives. **Example:** \[*]\[+]\[10]\[2]\[5] → (10 + 2) * 5 = 60.

10) **E10-array-queue**: Propose a representation for a queue using an array, such that the enqueue operation is O(1). Implement the corresponding algorithm using your structure.

11) **E11-reverse-average**: Given a queue, calculate the average of the elements it stores. The program should print the average and the queue in reverse order.

12) **E12-min-max**: Given a queue of integers, create an algorithm that shows the largest and smallest elements.

13) **E13-stack-simulation**: Create an algorithm that simulates a stack using a queue and sums the elements of the "stack". Also, implement a queue simulation using a stack.

14) **E14-reverse-dipole**: Create an algorithm that, given a word stored in a dipole, produces a new word in another dipole that is the reverse of the original.

15) **E15-undo-and-redo**: Propose a data structure that easily implements an undo and redo mechanism in a system.

16) **E16-queue-decimal-binary**: Given a decimal number stored in a stack, implement an algorithm to convert it to binary and output the result in a queue. Example: (36)10 → (100100)2.

17) **E17-medieval-queue**: A medieval queue behaves like a regular queue, with the only difference being that the elements stored in it are divided into two groups: nobles and commoners. Within each group, elements must be served in order of arrival; but as long as there are nobles in the queue, they must be served before the commoners. Implement a medieval queue by inheriting from a normal queue and overriding the enqueue method.

18) **E18-dipole-sum**: Given a dipole of integers, create an algorithm that sums the first N elements from the central value towards its ends, without using any auxiliary data structure. **Example:** Starting from the top of the dipole D1:\[1, 5, 6, 7, 3] with n=3, the operation is 6+5+7=18.

19) **E19-dipole-center**: Given a dipole, create an algorithm that extracts the central element if the dipole has an odd number of elements, or the two central elements if the dipole has an even number of elements. Do not assume there is a function that returns the number of elements in the dipole or that it has the number of elements at the start of the algorithm. **Example:** Starting from the top of the dipole D1:\[5, 3, 8, 1, 6] with 8 being the element to extract, or D2:\[8, 9, 2, 7] with 9 and 2 being the elements to extract.

20) **E20-dipole-palindrome**: Suppose you have a sequence of characters stored in a dipole, and you want to know if the sequence is a palindrome.

21) **E21-queue-stack**: Given a queue of positive integers, create a stack that indicates which elements are in the queue followed by their occurrences.

22) **E22-remove-negatives**: Given a queue of integers, create an algorithm that removes negative numbers without changing the other elements in the queue.
