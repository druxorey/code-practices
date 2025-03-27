#include <iostream>
#include "sdx_node.hpp"

template <typename datatype>
class list {
	public:
		// Define an alias for a pointer to a doubleNode
		typedef doubleNode<datatype> *iterator;

		list();
		~list();

		iterator first();
		iterator last();
		datatype *get(iterator i) const;
		void next(iterator &i) const;
		void prev(iterator &i) const;
		bool isEmpty() const;
		int size() const;
		void insert(iterator i, datatype payload, bool before = true);
		void deleteNode(iterator i);

	private:
		iterator _first; // Pointer to the first node in the list
		iterator _last; // Pointer to the last node in the list
		int _size; // Number of nodes in the list
};

// Constructor: Initializes an empty list
template <typename datatype>
list<datatype>::list() {
	this->_first = nullptr;
	this->_last = nullptr;
	this->_size = 0;
}

// Destructor: Cleans up the list by deleting all nodes
template <typename datatype>
list<datatype>::~list() {
	while (!this->isEmpty()) {
		// Delete nodes one by one until the list is empty
		this->deleteNode(this->first());
	}
}

// Returns an iterator to the first node in the list
template <typename datatype>
typename::list<datatype>::iterator list<datatype>::first() {
	return this->_first;
}

// Returns an iterator to the last node in the list
template <typename datatype>
typename::list<datatype>::iterator list<datatype>::last() {
	return this->_last;
}

// Returns a pointer to the data stored in the node pointed to by the iterator
template <typename datatype>
datatype *list<datatype>::get(iterator i) const {
	if (i == nullptr) return nullptr;
	return &i->payload;
}

// Advances the iterator to the next node
template <typename datatype>
void list<datatype>::next(iterator &i) const {
	if (i == nullptr) return;
	i = i->next;
}

// Moves the iterator to the previous node
template <typename datatype>
void list<datatype>::prev(iterator &i) const {
	if (i == nullptr) return;
	i = i->prev;
}

// The list is empty if _first is null
template <typename datatype>
bool list<datatype>::isEmpty() const {
	return this->_first == nullptr;
}

// Return the number of nodes in the list
template <typename datatype>
int list<datatype>::size() const {
	return this->_size;
}

// Inserts a new node with the given payload before or after the node pointed
// to by the iterator
template <typename datatype>
void list<datatype>::insert(iterator i, datatype payload, bool before) {
	// Create a new node with the given payload
	doubleNode<datatype> *newNode = new doubleNode<datatype>(payload);

	this->_size++;

	if (this->isEmpty()) {
		this->_first = newNode;
		this->_last = newNode;
		return;
	}

	// Insert the new node before the node pointed to by the iterator
	if (before) {
		newNode->next = i;
		newNode->prev = i->prev;
		if (i->prev != nullptr)
			i->prev->next = newNode;

		i->prev = newNode;

		if (this->first() == i)
			this->_first = newNode;

		return;
	}

	// Insert the new node after the node pointed to by the iterator
	newNode->next = i->next;
	newNode->prev = i;
	if (i->next != nullptr)
		i->next->prev = newNode;

	i->next = newNode;

	// If the current node was the last node, update _last to the new node
	if (this->last() == i)
		this->_last = newNode;
}

// Deletes the node pointed to by the iterator
template <typename datatype>
void list<datatype>::deleteNode(iterator i) {
	if (i == nullptr) return;

	this->_size--;

	// If the node to be deleted is the first node, update _first
	if (i == this->first()) this->_first = i->next;
	// If the node to be deleted is the last node, update _last
	if (i == this->last()) this->_last = i->prev;
	// Update the previous node's next pointer
	if (i->prev != nullptr) i->prev->next = i->next;
	// Update the next node's prev pointer
	if (i->next != nullptr) i->next->prev = i->prev;

	delete i;
}

// Print the contents of the list using this implementation
template <typename datatype>
void printList(list<datatype> &myList) {
	typename list<datatype>::iterator listIterator = myList.first();
	int nodeIndex = 1;
	while (listIterator != nullptr) {
		datatype retrievedData = *myList.get(listIterator);
		std::cout << "Node " << nodeIndex << ": [" << retrievedData << "]" << std::endl;
		myList.next(listIterator);
		nodeIndex++;
	}
}
