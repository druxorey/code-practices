#include <iostream>
#include <list>

template <typename datatype>
class rope : private std::list<datatype> {
	public:
		rope();
		~rope();

		typename std::list<datatype>::iterator begin();
		typename std::list<datatype>::iterator end();
		void push_back(const datatype& value);
		void push_front(const datatype& value);
		void pop_back();
		void pop_front();
		void clear();
		bool empty() const;
		size_t size() const;
		typename std::list<datatype>::iterator insert(typename std::list<datatype>::iterator position, const datatype& value);
		typename std::list<datatype>::iterator erase(typename std::list<datatype>::iterator position);

		void print();
		void fill(int size, int initialValue = 0);
		void rand(int size);

	private:
		typename std::list<datatype>::iterator it;
};

// Constructor: Initializes an empty rope
template <typename datatype>
rope<datatype>::rope() : it(this->begin()) {}

// Destructor: Clears the rope
template <typename datatype>
rope<datatype>::~rope() {
	this->clear();
}

// Returns an iterator to the first element in the rope
template <typename datatype>
typename std::list<datatype>::iterator rope<datatype>::begin() {
	return std::list<datatype>::begin();
}

// Returns an iterator to the last element in the rope
template <typename datatype>
typename std::list<datatype>::iterator rope<datatype>::end() {
	return std::list<datatype>::end();
}

// Add an element to the end of the rope
template <typename datatype>
void rope<datatype>::push_back(const datatype& value) {
	return std::list<datatype>::push_back(value);
}

// Add an element to the front of the rope
template <typename datatype>
void rope<datatype>::push_front(const datatype& value) {
	std::list<datatype>::push_front(value);
}

// Remove the last element of the rope
template <typename datatype>
void rope<datatype>::pop_back() {
	std::list<datatype>::pop_back();
}

// Remove the first element of the rope
template <typename datatype>
void rope<datatype>::pop_front() {
	std::list<datatype>::pop_front();
}

// Clear the rope
template <typename datatype>
void rope<datatype>::clear() {
	std::list<datatype>::clear();
}

// Check if the rope is empty
template <typename datatype>
bool rope<datatype>::empty() const {
	return std::list<datatype>::empty();
}

// Get the size of the rope
template <typename datatype>
size_t rope<datatype>::size() const {
	return std::list<datatype>::size();
}

// Insert an element at a specific position
template <typename datatype>
typename std::list<datatype>::iterator rope<datatype>::insert(typename std::list<datatype>::iterator pos, const datatype& value) {
	return std::list<datatype>::insert(pos, value);
}

// Erase an element at a specific position
template <typename datatype>
typename std::list<datatype>::iterator rope<datatype>::erase(typename std::list<datatype>::iterator pos) {
	return std::list<datatype>::erase(pos);
}

// Print the contents of the rope using the STD implementation
template <typename datatype>
void rope<datatype>::print() {
    int nodeIndex = 1;
    for (auto iterator = this->begin(); iterator != this->end(); ++iterator) {
        std::cout << "Node " << nodeIndex << ": [" << *iterator << "]" << std::endl;
        nodeIndex++;
    }
}

// Fill the rope with values
template <typename datatype>
void rope<datatype>::fill(int size, int initialValue) {
    for (int i = initialValue; i < size + initialValue; i++) {
		this->push_back(i);
	}
}

// Fill the rope with random values
template <typename datatype>
void rope<datatype>::rand(int size) {
	srand(time(NULL));
    for (int i = 0; i < size; i++) {
		this->push_back(::rand() % size);
	}
}
