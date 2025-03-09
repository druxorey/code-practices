# Lists

1) **E01-remove-number**: Given a list with arrays of integers and an integer n, implement a function to remove all occurrences of the number n from the list.

2) **E02-mix-lists**: Implement a function `mixLists()` that takes two lists of integers sorted in ascending order as parameters and returns a new list with the union of both previous lists with their elements sorted in the same way.

3) **E03-circular-list**: Implement a list that simulates a circular list of characters with n positions and given two integers m and i, print m values starting from position i.

4) **E04-recursive-sum**: Build a function that sums the elements of a list with arrays recursively, where the algorithm is called `arrayListSize()` and it divides by 2 in each iteration.

5) **E05-sum-list**: Create a function `sumList()` that returns the sum of all elements of a given list.

6) **E06-reorder-list**: Implement a function `reorderList()` that takes a singly linked list and reorders it as follows: the first element is followed by the last, then the second element is followed by the second last, and so on. **Example:** If the original list is \[1, 2, 3, 4, 5\], the reordered list would be \[1, 5, 2, 4, 3\].

7) **E07-even-odd**: Given a list of integers sorted in ascending order, create a function that returns a list with even elements at the beginning and odd elements at the end (also sorted).

8) **E08-remove-duplicates**: Create a function that removes duplicate values from a singly linked list of integers.

9) **E09-palindrome**: Given a singly linked list, implement the `isPalindrome()` operation, which checks if a sequence of characters stored in the list is a palindrome or not.

10) **E10-unique-count**: Given an unordered list A with repeated elements, you need to efficiently solve the following requirement: Obtain a list B that contains the elements in A without repetitions, followed by the number of occurrences. Solve the problem using pointer manipulation. The list A can be modified.

11) **E11-reverse-list**: Develop two algorithms (one recursive and one iterative) to reverse a given singly linked list without creating a new list or physically moving the elements in the list.

12) **E12-sum-previous**: Implement a function that receives a doubly circular linked list and an integer "n" as parameters, and returns the result of adding the previous element of the list to the current element "n" times as follows:

- Given L = {1, 4, 3, 2, 3} and n = 2
- Iteration 1: {4, 5, 8, 10, 13}
- Iteration 2: {17, 22, 30, 40, 53}
- Returns L = {17, 22, 30, 40, 53}

13) **E13-remove-nodes**: Given a circular list, implement:

a) A method that, given an initial logical position P >= 1 and an offset d >= 0, removes the element at position P + d of the circular list. Calculate the time complexity of your algorithm.

b) A method that uses the previous algorithm to remove X nodes from the list, given an initial logical position P and an offset d. Note that once the position P has been shifted d positions, the next removal should take the current position P + d as the new initial position.
