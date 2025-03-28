#pragma once

// It's a simple node with a payload of any type
template <typename datatype> 
class StandardNode {
	public:
		datatype payload;
		StandardNode<datatype> *prev;
		StandardNode<datatype> *next;

		// Initializes payload with the default value of datatype
		StandardNode() {
			this->payload = datatype();
		}

		// Initializes payload with the given value and sets prev and next to nullptr
		StandardNode(datatype payload) {
			next = nullptr;
			prev = nullptr;
			this->payload = payload;
		}
};
