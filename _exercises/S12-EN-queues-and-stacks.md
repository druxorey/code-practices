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
