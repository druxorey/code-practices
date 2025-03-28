#include <list>

#pragma once

class TreeNode {
	public:
		int value; // Value stored in the node
		int childrenCount; // Number of children nodes
		std::list<TreeNode*> children; // List of pointers to children nodes

		TreeNode(int value) : value(value), childrenCount(0) {}
		~TreeNode();

		// Method to check if the node is a leaf (has no children)
		bool isLeaf();
};

class Tree {
	public:
		TreeNode root; // Root node of the tree

		// Constructor initializing the tree with a root value
		Tree(int rootValue) : root(rootValue) {}

		// Method to add a child node to a given parent node
		void addChildren(int value, TreeNode* parent);
};

// Destructor implementation to delete all children nodes
inline TreeNode::~TreeNode() {
	while (!children.empty()) {
		delete children.front(); // Delete the first child node
		childrenCount--; // Decrease the children count
		children.pop_front(); // Remove the first child from the list
	}
}

// Method implementation to check if the node is a leaf
inline bool TreeNode::isLeaf() {
	return children.empty();
}

// Method implementation to add a child node to a given parent node
inline void Tree::addChildren(int value, TreeNode* parent) {
	if (parent == nullptr) return; // Do nothing if the parent is null

	TreeNode* newChild = new TreeNode(value); // Create a new child node
	parent->children.push_back(newChild); // Add the new child to the parent's children list
	parent->childrenCount++; // Increase the parent's children count
}
