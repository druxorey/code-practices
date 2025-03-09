# Trees and Heaps

1) **E01-sum-between-levels** Using general tree primitives, develop a function that returns the sum of all integers between two levels.

2) **E02-semi-complete-tree** Let's say a tree is semi-complete when its non-leaf nodes have the same degree. Using general tree primitives, develop an algorithm to determine if a tree is semi-complete (the degree of the tree is unknown).

3) **E03-inorder-preorder** Develop the inorder (also called symmetric) and preorder traversals of general trees using only the postorder traversal (i.e., it should show the sequence of the first two traversals visiting the tree in the Left-Right-Root order).

4) **E04-cousins** The following genealogical tree is represented graphically as follows:

![example](images/S13-E04.webp)

Implement the cousins operation, given the name of a person, print all their cousins.

5) **E05-prune-leaves** Using general tree primitives, implement the PruneLeaves operation, which consists of removing all nodes that are leaves in a tree.

6) **E06-value-function** Develop an algorithm using general tree primitives that returns the following value: Value(A) = Product(left(A)) - Product(right(A)) where Product(left(A)) is the product of all nodes in the left subtree of A, and Product(right(A)) corresponds to the product of the nodes in the right subtree of A. Each node should be visited only once, and the function signature is: int Value(Tree B).

7) **E07-static-representation** Consider the following static representation of trees:

![example](images/S13-E05.webp)

It can be seen that the tree storage method consists of having its postorder traversal defined in the array (in addition to having the degree of each node). What disadvantages could this static storage approach have? Based on this representation, define the primitives of First_Child, Right_Sibling, and Parent. Suggestion: Use an auxiliary stack.

8) **E08-true-false-statements** Indicate which of the following statements are true or false. Justify:

a. The height of a tree node is the length of the path from the node to the leaf.
b. The height of a tree node is given by the height of the tree minus the level of the node.
c. For any binary tree, the sequence produced by traversing it in preorder is different from that produced in symmetric order.

9) **E09-binary-tree-order** Generalize the form of binary trees whose nodes appear exactly in the same order in the traversals:

a. Preorder and Symmetric
b. Postorder and Symmetric
c. Preorder and Postorder

10) **E10-preorder-traversal** Consider the problem of traversing a binary tree, for example, in preorder. There are two possible solutions:

Solution a)

```cpp
void PreOrder (Arbin A) {
	if (! IsEmpty(A)) {
		cout << Root(A) << endl;
		PreOrder(Left(A));
		PreOrder(Right(A));
	}
}
```

Solution b)

```cpp
void PreOrder (Arbin A) {
	if (! IsEmpty(A)) {
		cout << Root(A) << endl;
		if (! IsEmpty(Left(A))) {
			PreOrder(Left(A));
		}
		if (! IsEmpty(Right(A))) {
			PreOrder(Right(A));
		}
	}
}
```

How many calls are made in each case? Express your answer based on the number of nodes in the tree.

11) **E11-general-to-binary** Given the following representation of general trees, develop an algorithm that, given a general tree, produces its equivalent in a binary tree.

```cpp
class Child_Node {
	GenTree pNode;
	Child_Node *next;
};
class Node {
	int info;
	Child_Node *Children;
};
class GenTree {
	Node *root;
};
```

12) **E12-inorder-non-recursive** There is a language that does not allow recursion, and to simulate it, a stack is used to store, in the case of trees, the path traveled from the root to the visited node. Develop the algorithm that allows traversing a binary tree (without using recursion) in symmetric order.

13) **E13-arbin-operations** Using the ARBIN operations, develop the following operations:

a) `bool IsLeaf(Arbin A, Arbin X);` Such that IsLeaf(A,X) = true if and only if Degree(root(X)) = 0 in tree A.
b) `bool IsParent(Arbin A, Arbin x, Arbin y);` Such that IsParent(A,x,y) returns true if and only if Root(x) is a direct ancestor of Root(y), and returns false otherwise.

What modifications would you make to the original structure so that IsParent is O(1)?

14) **E14-complete-binary-tree** Using the primitives of the Arbin class, develop an algorithm to check if a binary tree is complete.

15) **E15-subtree-check** A Binary Tree S is included in a Binary Tree T if S is equal to T or if S is equal to a subtree of T. Write a function that indicates if a tree S is included in a tree T, in which case it should return the address of the subtree of T that is equal to S.

16) **E16-symmetry-check** Write a function that checks the symmetry of any binary tree. Examples:

17) **E17-ancestor-check** The preorder, postorder, and symmetric sequences of a tree with n nodes are stored in three different lists. Develop an algorithm to determine if node i is an ancestor of node j (for any pair of nodes i, j). Would it be possible to develop such an algorithm with only two traversals? If your answer is yes, which pairs of traversals would they be, and develop the corresponding algorithms? If your answer is no, justify in detail why not. Develop the algorithm(s) for both binary trees and general trees.

18) **E18-prefix-to-infix** Given a sequence in prefix notation and stored as a SEQUENCE\[ELEMENT\], implement an operation using the primitives of binary trees and the Sequence type, which stores that expression in a binary tree, such that if that tree is traversed in symmetric order, the expression in infix notation is obtained. The elements of the sequence can be operators or operands. The following primitive is defined for these elements:

```cpp
Function IsOperator (ELEMENT E) → Logical 

	if E ∈ {+, -, *, /} then 
		<- (True); 
	else
		<-(False);
	endif
EndFunction
```

**Example:** Given the sequence S = {* + A B C}. Applying the Generate operation (var A: Arbin; S: Sequence) and traversing the tree A in symmetric order, generates the sequence: A + B * C

19) **E19-complete-full-tree** Define complete and full binary tree and indicate its importance in the implementation of the heap concept.

20) **E20-heap-class** Given the following class definition:

```cpp
class Heap {
	public:
		Heap(int t) {
			size=t;
			heap = new int[t];
		}
		void Insert(int elem);
		void Remove();
	private:
		Node<int> *heap;
		int size;
		void Sink();
		void Float();
};
```

Implement the Sink and Float primitives. Using these, implement Insert and Remove.

21) **E21-merge-heaps** For the Heap class defined above, add a method to merge two heaps with and without duplicate keys, using primitives and with the following prototype: `void Merge(Heap H);` the result is stored in the Heap class that invokes the merge.

22) **E22-pointer-heap** Implement a heap using pointers instead of an array. Compare the time and space complexity of both implementations.

23) **E23-heap-property** Given the root node of a binary tree, implement a function that checks if the tree satisfies the heap property.
