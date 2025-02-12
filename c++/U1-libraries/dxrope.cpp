#include "dxlist.cpp"

template <typename datatype>
class rope : private dxlist<datatype> {
	public:
		typename dxlist<datatype>::iterator begin();
		typename dxlist<datatype>::iterator end();
		void push_back(const datatype& value);
		void push_front(const datatype& value);
		void pop_back();
		void pop_front();
		void clear();
		bool empty() const;
		size_t size() const;
		typename dxlist<datatype>::iterator insert(typename dxlist<datatype>::iterator position, const datatype& value);
		typename dxlist<datatype>::iterator erase(typename dxlist<datatype>::iterator position);

		void print();
		void fill(int size, int initialValue = 0);
		void rand(int size);

	private:
		typename dxlist<datatype>::iterator it;
};

// Returns an iterator to the first element in the rope
template <typename datatype>
typename dxlist<datatype>::iterator rope<datatype>::begin() {
	return dxlist<datatype>::begin();
}

// Returns an iterator to the last element in the rope
template <typename datatype>
typename dxlist<datatype>::iterator rope<datatype>::end() {
	return dxlist<datatype>::end();
}

// Add an element to the end of the rope
template <typename datatype>
void rope<datatype>::push_back(const datatype& value) {
	return dxlist<datatype>::push_back(value);
}

// Add an element to the front of the rope
template <typename datatype>
void rope<datatype>::push_front(const datatype& value) {
	dxlist<datatype>::push_front(value);
}

// Remove the last element of the rope
template <typename datatype>
void rope<datatype>::pop_back() {
	dxlist<datatype>::pop_back();
}

// Remove the first element of the rope
template <typename datatype>
void rope<datatype>::pop_front() {
	dxlist<datatype>::pop_front();
}

// Clear the rope
template <typename datatype>
void rope<datatype>::clear() {
	dxlist<datatype>::clear();
}

// Check if the rope is empty
template <typename datatype>
bool rope<datatype>::empty() const {
	return dxlist<datatype>::empty();
}

// Get the size of the rope
template <typename datatype>
size_t rope<datatype>::size() const {
	return dxlist<datatype>::size();
}

// Insert an element at a specific position
template <typename datatype>
typename dxlist<datatype>::iterator rope<datatype>::insert(typename dxlist<datatype>::iterator pos, const datatype& value) {
	return dxlist<datatype>::insert(pos, value);
}

// Erase an element at a specific position
template <typename datatype>
typename dxlist<datatype>::iterator rope<datatype>::erase(typename dxlist<datatype>::iterator pos) {
	return dxlist<datatype>::erase(pos);
}

// Print the contents of the rope using the STD implementation
template <typename datatype>
void rope<datatype>::print() {
	dxlist<datatype>::print();
}

// Fill the rope with values
template <typename datatype>
void rope<datatype>::fill(int size, int initialValue) {
	dxlist<datatype>::fill(size, initialValue);
}

// Fill the rope with random values
template <typename datatype>
void rope<datatype>::rand(int size) {
	dxlist<datatype>::rand(size);
}
