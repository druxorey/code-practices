# Queues, Dequeues, and Stacks

## **E01-binary-sum**:

Given two positive integers, whose digits are stored in a stack, create an algorithm using stack primitives to sum these numbers, leaving the result in another stack.

**Example:**

| Input          | Output  |
|----------------|---------|
| `P1: [1, 4, 5]` and `P2: [5, 3, 5]` | `P3: [6, 8, 0]` |
| `P1: [9, 9]` and `P2: [1]`           | `P3: [1, 0, 0]` |


## **E02-reverse-stack**:

Using only the primitives of the Stack class, develop a procedure that, given a stack `P`, reverses it. No auxiliary structures should be used.

**Example:**

| Input          | Output       |
|----------------|--------------|
| `P: [1, 2, 3]` | `P: [3, 2, 1]` |
| `P: [4, 5]`    | `P: [5, 4]`     |


## **E03-palindrome-check**:

Suppose you have a sequence of characters stored in a stack, and you want to determine if the sequence is a palindrome. Propose a solution for this.

**Example:**

| Input          | Output  |
|----------------|---------|
| `P: [r, a, d, a, r]` | `true`  |
| `P: [h, e, l, l, o]` | `false` |


## **E04-sum-elements**:

Given a stack of integers, create an algorithm to sum the first `N` elements from the bottom to the top of the stack, where `N` is the bottom, without using any auxiliary data structures.

**Example:**

| Input          | Output |
|----------------|--------|
| `P: [1, 5, 6, 7, 3]` and `N: 3` | `16` |
| `P: [2, 4, 6, 8]` and `N: 2`    | `10` |


## **E05-polish-notation**:

Polish notation places the operator before its operands. You are required to:

1. Transform a normal expression (operand operator operand) stored in a list into a stack in Polish notation.
2. Create an algorithm to evaluate a Polish notation expression stored in a stack.

**Example:**

| Input          | Output       |
|----------------|--------------|
| `Expression: A + B` | `+ A B` |
| `Expression: a + b / c` | `+ a / b c` |

## **E06-delete-nodes**:

Given a stack, implement an algorithm to delete `X` nodes from the stack, given a starting position `P` and an offset `d`. This algorithm will delete the elements at position `P` and `P+d` from the bottom of the stack.

**Example:**

| Input          | Output       |
|----------------|--------------|
| `P: [1, 2, 3, 4, 5]` and `P=2, d=1` | `P: [1, 4, 5]` |
| `P: [7, 8, 9, 10]` and `P=1, d=2`   | `P: [7, 10]`   |


## **E07-average-stack**:

Given a stack, determine the average of the elements it stores. As a restriction, the stack can only be traversed once.

**Example:**

| Input          | Output |
|----------------|--------|
| `P: [1, 2, 3, 4, 5]` | `3.0` |
| `P: [10, 20, 30]`     | `20.0`|


## **E08-pair-sum**:

Given a stack of integers, return the same stack with the sum of its elements in pairs.

**Example:**

| Input          | Output       |
|----------------|--------------|
| `P: [1, 2, 3, 4, 5]` | `P: [3, 7, 5]` |
| `P: [6, 7, 8]`       | `P: [13, 8]`   |


## **E09-prefix-evaluation**:

Create a procedure that accepts a simple arithmetic expression in prefix notation as input and evaluates it.

**Example:**

| Input          | Output |
|----------------|--------|
| `[* + 10 2 5]` | `60` |
| `[+ 3 4]`      | `7`  |


## **E10-array-queue**:

Propose a representation for a queue using an array, such that the enqueue operation is `O(1)`. Implement the corresponding algorithm using your structure.

**Example:**

| Input          | Output       |
|----------------|--------------|
| `Enqueue: 1`   | `Queue: [1]`  |
| `Enqueue: 2`   | `Queue: [1, 2]` |


## **E11-reverse-average**:

Given a queue, determine the average of the elements it stores. The program should print the average and the queue in reverse order.

**Example:**

| Input          | Output       |
|----------------|--------------|
| `Queue: [1, 2, 3, 4]` | `Average: 2.5` and `Queue: [4, 3, 2, 1]` |
| `Queue: [5, 10]`       | `Average: 7.5` and `Queue: [10, 5]`     |


## **E12-min-max**:

Given a queue of integers, create an algorithm to display the largest and smallest elements.

**Example:**

| Input          | Output       |
|----------------|--------------|
| `Queue: [1, 2, 3, 4, 5]` | `Max: 5, Min: 1` |
| `Queue: [10, 20, 5]`      | `Max: 20, Min: 5` |


## **E13-stack-simulation**:

Create an algorithm to simulate a stack using a queue and calculate the sum of the elements of this "stack." Also implement a simulation of a queue using a stack.

**Example:**

| Input          | Output       |
|----------------|--------------|
| `Queue: [1, 2, 3]` | `Sum: 6` |
| `Stack: [4, 5]`    | `Sum: 9` |


## **E14-reverse-dipole**:

Create an algorithm that, given a word stored in a deque, produces a new word in another deque that is the reverse of the original.

**Example:**

| Input          | Output   |
|----------------|----------|
| `deque = [a, b, c]` | `deque = [c, b, a]` |
| `deque = [x, y, z]` | `deque = [z, y, x]` |


## **E15-undo-and-redo**:

Propose a data structure that allows for easy implementation of an undo and redo mechanism in a system.

**Example:**

| Action         | Current State |
|----------------|---------------|
| `Write A`      | `A`           |
| `Write B`      | `AB`          |
| `Undo`         | `A`           |
| `Redo`         | `AB`          |


## **E16-queue-decimal-binary**:

Given a decimal number stored in a stack, implement an algorithm to convert it to binary and return the result in a queue.

**Example:**

| Input          | Output       |
|----------------|--------------|
| `stack = [36]` | `queue = [1, 0, 0, 1, 0, 0]` |
| `stack = [5]`  | `queue = [1, 0, 1]`          |


## **E17-medieval-queue**:

A medieval queue behaves like a regular queue, except that the elements stored in it are divided into two groups: nobles and commoners. Within each group, elements must be served in order of arrival; however, nobles must always be served before commoners if there are any in the queue.

Implement a medieval queue by inheriting from a normal queue but overriding the enqueue method.

**Example:**

| Input          | Output       |
|----------------|--------------|
| `queue = [commoner1, noble1, commoner2, noble2]` | `noble1, noble2, commoner1, commoner2` |
| `queue = [noble1, commoner1, commoner2]`         | `noble1, commoner1, commoner2`         |


## **E18-dipole-sum**:

Given a deque of integers, create an algorithm to sum the first `N` elements from the center towards its ends, without using any auxiliary data structures.

**Example:**

| Input          | Output |
|----------------|--------|
| `deque = [1, 5, 6, 7, 3], n = 3` | `18` (6 + 5 + 7) |
| `deque = [2, 4, 6, 8, 10], n = 2` | `10` (6 + 4)     |


## **E19-dipole-center**:

Given a deque, create an algorithm to extract the central element if the deque has an odd number of elements, or the two central elements if the deque has an even number of elements.

**Example:**

| Input          | Output       |
|----------------|--------------|
| `deque = [5, 3, 8, 1, 6]` | `8`          |
| `deque = [8, 9, 2, 7]`    | `9, 2`       |


## **E20-dipole-palindrome**:

Suppose you have a sequence of characters stored in a deque, and you want to determine if the sequence is a palindrome.

**Example:**

| Input          | Output |
|----------------|--------|
| `deque = [a, b, b, a]` | `true` |
| `deque = [r, a, d, a, r]` | `true` |
| `deque = [h, e, l, l, o]` | `false` |


## **E21-queue-stack**:

Given a queue of positive integers, create a stack that indicates which elements are in the queue followed by their occurrences.

**Example:**

| Input          | Output       |
|----------------|--------------|
| `queue = [1, 2, 2, 3]` | `stack = [1, 1, 2, 2, 3, 1]` |
| `queue = [4, 4, 5]`    | `stack = [4, 2, 5, 1]`       |


## **E22-remove-negatives**:

Given a queue of integers, create an algorithm to remove negative numbers without changing the other elements of the queue.

**Example:**

| Input          | Output       |
|----------------|--------------|
| `queue = [1, -2, 3, -4]` | `queue = [1, 3]` |
| `queue = [-1, -2, 3]`    | `queue = [3]`    |


## **E23-valid-parentheses**:

Given a string `s` containing only the characters `(`, `)`, `{`, `}`, `[` and `]`, determine if the input string is valid.

A string is valid if:

- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.
- Every closing bracket has a corresponding open bracket of the same type.

**Example:**

| Input          | Output |
|----------------|--------|
| `s = "()"`     | `true` |
| `s = "()[]{}"` | `true` |
| `s = "(]"`     | `false`|
| `s = "([])"`   | `true` |

