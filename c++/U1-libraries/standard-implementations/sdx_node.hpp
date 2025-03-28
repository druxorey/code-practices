#pragma once

// It's a simple node with a payload of any type
template <typename datatype> 
class Node {
	public:
		datatype payload;

		// Initializes payload with the default value of datatype
		Node() {
			this->payload = datatype(); 
		}

		// Initializes payload with the given value
		Node(datatype payload) {
			this->payload = payload;
		}
};

// It's a simple node with a payload of any type and a pointer to the next node
template <typename datatype>
class SimpleNode : public Node<datatype> {
	public:
		SimpleNode<datatype> *next;

		// Initializes payload and sets next to nullptr
		SimpleNode() : Node<datatype>() {
			next = nullptr;
		}

		// Initializes payload with the given value and sets next to nullptr
		SimpleNode(datatype payload) : Node<datatype>(payload) {
			next = nullptr;
		}
};

// Double linked node with a payload of any type
template <typename datatype>
class DoubleNode : public Node<datatype> {
	public:
		DoubleNode<datatype> *prev;
		DoubleNode<datatype> *next;

		// Initializes payload with the given value and sets prev and next to nullptr
		DoubleNode(datatype payload) : Node<datatype>(payload) {
			next = nullptr;
			prev = nullptr;
		}
};
