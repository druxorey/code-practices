#include "sdx_list_doubly_linked.hpp"

// Template class for a queue, inheriting privately from a list
template <typename datatype>
class queue : private list<datatype> {
	public:
		queue();
		~queue();

		void push(datatype payload);
		datatype *pop();
		bool isEmpty() const;
		int size() const;
};

template <typename datatype>
queue<datatype>::queue() : list<datatype>() {
	// No additional initialization required, just call the base class constructor
}

template <typename datatype>
queue<datatype>::~queue() {
	// No additional cleanup required, just call the base class destructor
}

// Push method implementation
template <typename datatype> 
void queue<datatype>::push(datatype payload) {
	// Insert the payload at the end of the list
	this->insert(this->last(), payload, true);
}

// Pop method implementation
template <typename datatype>
datatype *queue<datatype>::pop() {
	if (list<datatype>::isEmpty()) return nullptr;

	// Create a copy of the payload at the first node
	datatype *payload = new datatype(*this->get(this->first()));

	this->deleteNode(this->first());

	return payload;
}

template <typename datatype>
bool queue<datatype>::isEmpty() const {
	return list<datatype>::isEmpty();
}

template <typename datatype> 
int queue<datatype>::size() const {
	return list<datatype>::size();
}
