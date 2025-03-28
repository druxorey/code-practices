#include <iostream>

#pragma once

class BstNode {
	public:
		int value;
		BstNode *leftChild;
		BstNode *rightChild;

		BstNode();
		BstNode(int value);
		~BstNode();

		// Function to check if the node is a leaf (no children)
		bool isLeaf();

		// Overload the << operator to print the binaryTreeNode object
		friend std::ostream &operator<<(std::ostream &out, BstNode &object);
		// Overload the << operator to print the binaryTreeNode pointer
		friend std::ostream &operator<<(std::ostream &out, BstNode *&object);
};

// Default constructor implementation
inline BstNode::BstNode() {
	this->value = 0;
	leftChild = NULL;
	rightChild = NULL;
}

// Constructor with a value parameter implementation
inline BstNode::BstNode(int value) {
	this->value = value;
	leftChild = NULL;
	rightChild = NULL;
}

// Destructor implementation
inline BstNode::~BstNode() {
	if (leftChild != NULL) delete leftChild;
	if (rightChild != NULL) delete rightChild;
}

// Function to check if the node is a leaf (no children)
inline bool BstNode::isLeaf() {
	return leftChild == NULL && rightChild == NULL;
}

// Overload the << operator to print the binaryTreeNode object
inline std::ostream &operator<<(std::ostream &out, BstNode &object) {
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
inline std::ostream &operator<<(std::ostream &out, BstNode *&object) {
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


class Bst {
	public:
		BstNode *root;

		Bst();
		void insert(int value); // Function to insert a value into the tree
		bool found(int value); // Function to check if a value is found in the tree

	private:
		void insert(int value, BstNode *&root); // Helper function to insert a value into the tree
		bool found(int value, BstNode *root); // Helper function to check if a value is found in the tree
};

// Default constructor implementation
inline Bst::Bst() {
	root = NULL;
}

// Function to insert a value into the tree
inline void Bst::insert(int value) {
	insert(value, root);
}

// Function to check if a value is found in the tree
inline bool Bst::found(int value) {
	return found(value, root);
}

// Helper function to insert a value into the tree
inline void Bst::insert(int value, BstNode *&root) {
	if (root == NULL) {
		root = new BstNode(value);
		return;
	}

	if (root->value == value) return;
	if (root->value < value) return insert(value, root->rightChild);

	insert(value, root->leftChild);
}

// Helper function to check if a value is found in the tree
inline bool Bst::found(int value, BstNode *root) {
	if (root == NULL) return false;
	if (root->value == value) return true;
	if (root->value < value) return found(value, root->rightChild);
	return found(value, root->leftChild);
}
