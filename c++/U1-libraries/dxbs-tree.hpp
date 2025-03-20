#include <iostream>

class binaryTreeNode {
	public:
		int value;
		binaryTreeNode *leftChild;
		binaryTreeNode *rightChild;

		binaryTreeNode();
		binaryTreeNode(int value);
		~binaryTreeNode();

		// Function to check if the node is a leaf (no children)
		bool isLeaf();

		// Overload the << operator to print the binaryTreeNode object
		friend std::ostream &operator<<(std::ostream &out, binaryTreeNode &object);
		// Overload the << operator to print the binaryTreeNode pointer
		friend std::ostream &operator<<(std::ostream &out, binaryTreeNode *&object);
};

// Default constructor implementation
inline binaryTreeNode::binaryTreeNode() {
	this->value = 0;
	leftChild = NULL;
	rightChild = NULL;
}

// Constructor with a value parameter implementation
inline binaryTreeNode::binaryTreeNode(int value) {
	this->value = value;
	leftChild = NULL;
	rightChild = NULL;
}

// Destructor implementation
inline binaryTreeNode::~binaryTreeNode() {
	if (leftChild != NULL) delete leftChild;
	if (rightChild != NULL) delete rightChild;
}

// Function to check if the node is a leaf (no children)
inline bool binaryTreeNode::isLeaf() {
	return leftChild == NULL && rightChild == NULL;
}

// Overload the << operator to print the binaryTreeNode object
inline std::ostream &operator<<(std::ostream &out, binaryTreeNode &object) {
	out << "BinaryNode Payload: " << object.value;

	out << " Left Child: ";
	if (object.leftChild)
		out << object.leftChild->value;
	else
		out << "null";

	out << " Right Child: ";
	if (object.rightChild)
		out << object.rightChild->value;
	else
		out << "null";

	return out;
}

// Overload the << operator to print the binaryTreeNode pointer
inline std::ostream &operator<<(std::ostream &out, binaryTreeNode *&object) {
	if (object == NULL) {
		out << "null";
		return out;
	}

	out << "BinaryNode Payload: " << object->value;

	out << " Left Child: ";
	if (object->leftChild)
		out << object->leftChild->value;
	else
		out << "null";

	out << " Right Child: ";
	if (object->rightChild)
		out << object->rightChild->value;
	else
		out << "null";

	return out;
}


class binaryTree {
	public:
		binaryTreeNode *root;

		binaryTree();
		void insert(int value); // Function to insert a value into the tree
		bool found(int value); // Function to check if a value is found in the tree

	private:
		void insert(int value, binaryTreeNode *&root); // Helper function to insert a value into the tree
		bool found(int value, binaryTreeNode *root); // Helper function to check if a value is found in the tree
};

// Default constructor implementation
inline binaryTree::binaryTree() {
	root = NULL;
}

// Function to insert a value into the tree
inline void binaryTree::insert(int value) {
	insert(value, root);
}

// Function to check if a value is found in the tree
inline bool binaryTree::found(int value) {
	return found(value, root);
}

// Helper function to insert a value into the tree
inline void binaryTree::insert(int value, binaryTreeNode *&root) {
	if (root == NULL) {
		root = new binaryTreeNode(value);
		return;
	}

	if (root->value == value) return;
	if (root->value < value) return insert(value, root->rightChild);

	insert(value, root->leftChild);
}

// Helper function to check if a value is found in the tree
inline bool binaryTree::found(int value, binaryTreeNode *root) {
	if (root == NULL) return false;
	if (root->value == value) return true;
	if (root->value < value) return found(value, root->rightChild);
	return found(value, root->leftChild);
}
