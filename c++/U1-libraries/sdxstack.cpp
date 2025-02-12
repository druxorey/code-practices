#include "sdxlist.cpp"

// Template class for a stack, inheriting privately from a list
template <typename datatype>
class stack : private list<datatype> {
	public:
		stack();
		~stack();

		void push(datatype payload);
		datatype *pop();
		bool isEmpty() const;
		int size() const;
};

template <typename datatype>
stack<datatype>::stack() : list<datatype>() {
	// No additional initialization required, just call the base class constructor
}

template <typename datatype>
stack<datatype>::~stack() {
	// No additional cleanup required, just call the base class destructor
}

// Push method implementation
template <typename datatype>
void stack<datatype>::push(datatype payload) {
	// Insert the payload at the beginning of the list
	this->insert(this->firts(), payload, false);
}

// Pop method implementation
template <typename datatype>
datatype *stack<datatype>::pop() {
	if (list<datatype>::isEmpty()) return nullptr;

	// Create a copy of the payload at the first node
	datatype *payload = new datatype(*this->get(this->first()));

	this->deleteNode(this->first());

	return payload;
}

template <typename datatype>
bool stack<datatype>::isEmpty() const {
	return list<datatype>::isEmpty();
}

template <typename datatype>
int stack<datatype>::size() const {
	return list<datatype>::size();
}
