#include "sdx_list_doubly_linked.hpp"

#pragma once

// Template class for a stack, inheriting privately from a list
template <typename datatype>
class StandardStack : private StandardDoubleList<datatype> {
	public:
		StandardStack();
		~StandardStack();

		void push(datatype payload);
		datatype *pop();
		bool isEmpty() const;
		int size() const;
};

template <typename datatype>
StandardStack<datatype>::StandardStack() : StandardDoubleList<datatype>() {
	// No additional initialization required, just call the base class constructor
}

template <typename datatype>
StandardStack<datatype>::~StandardStack() {
	// No additional cleanup required, just call the base class destructor
}

// Push method implementation
template <typename datatype>
void StandardStack<datatype>::push(datatype payload) {
	// Insert the payload at the beginning of the list
	this->insert(this->firts(), payload, false);
}

// Pop method implementation
template <typename datatype>
datatype *StandardStack<datatype>::pop() {
	if (StandardDoubleList<datatype>::isEmpty()) return nullptr;

	// Create a copy of the payload at the first node
	datatype *payload = new datatype(*this->get(this->first()));

	this->deleteNode(this->first());

	return payload;
}

template <typename datatype>
bool StandardStack<datatype>::isEmpty() const {
	return StandardDoubleList<datatype>::isEmpty();
}

template <typename datatype>
int StandardStack<datatype>::size() const {
	return StandardDoubleList<datatype>::size();
}
