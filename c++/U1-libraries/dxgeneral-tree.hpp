#include <list>

#pragma once

class generalTreeNode {
	public:
		int value; // Value stored in the node
		int childrenCount; // Number of children nodes
		std::list<generalTreeNode*> children; // List of pointers to children nodes

		generalTreeNode(int value) : value(value), childrenCount(0) {}
		~generalTreeNode();

		// Method to check if the node is a leaf (has no children)
		bool isLeaf();
};

class tree {
	public:
		generalTreeNode root; // Root node of the tree

		// Constructor initializing the tree with a root value
		tree(int rootValue) : root(rootValue) {}

		// Method to add a child node to a given parent node
		void addChildren(int value, generalTreeNode* parent);
};

// Destructor implementation to delete all children nodes
inline generalTreeNode::~generalTreeNode() {
	while (!children.empty()) {
		delete children.front(); // Delete the first child node
		childrenCount--; // Decrease the children count
		children.pop_front(); // Remove the first child from the list
	}
}

// Method implementation to check if the node is a leaf
inline bool generalTreeNode::isLeaf() {
	return children.empty();
}

// Method implementation to add a child node to a given parent node
inline void tree::addChildren(int value, generalTreeNode* parent) {
	if (parent == nullptr) return; // Do nothing if the parent is null

	generalTreeNode* newChild = new generalTreeNode(value); // Create a new child node
	parent->children.push_back(newChild); // Add the new child to the parent's children list
	parent->childrenCount++; // Increase the parent's children count
}
