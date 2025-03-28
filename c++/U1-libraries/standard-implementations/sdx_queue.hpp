#include "sdx_list_doubly_linked.hpp"

#pragma once

// Template class for a queue, inheriting privately from a list
template <typename datatype>
class StandardQueue : private StandardDoubleList<datatype> {
	public:
		StandardQueue();
		~StandardQueue();

		void push(datatype payload);
		datatype *pop();
		bool isEmpty() const;
		int size() const;
};

template <typename datatype>
StandardQueue<datatype>::StandardQueue() : StandardDoubleList<datatype>() {
	// No additional initialization required, just call the base class constructor
}

template <typename datatype>
StandardQueue<datatype>::~StandardQueue() {
	// No additional cleanup required, just call the base class destructor
}

// Push method implementation
template <typename datatype> 
void StandardQueue<datatype>::push(datatype payload) {
	// Insert the payload at the end of the list
	this->insert(this->last(), payload, true);
}

// Pop method implementation
template <typename datatype>
datatype *StandardQueue<datatype>::pop() {
	if (StandardDoubleList<datatype>::isEmpty()) return nullptr;

	// Create a copy of the payload at the first node
	datatype *payload = new datatype(*this->get(this->first()));

	this->deleteNode(this->first());

	return payload;
}

template <typename datatype>
bool StandardQueue<datatype>::isEmpty() const {
	return StandardDoubleList<datatype>::isEmpty();
}

template <typename datatype> 
int StandardQueue<datatype>::size() const {
	return StandardDoubleList<datatype>::size();
}
