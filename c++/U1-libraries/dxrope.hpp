#include "dxlist.hpp"

#pragma once

template <typename datatype>
class Rope : private DxList<datatype> {
	public:
		typename DxList<datatype>::iterator begin();
		typename DxList<datatype>::iterator end();
		void push_back(const datatype& value);
		void push_front(const datatype& value);
		void pop_back();
		void pop_front();
		void clear();
		bool empty() const;
		size_t size() const;
		typename DxList<datatype>::iterator insert(typename DxList<datatype>::iterator position, const datatype& value);
		typename DxList<datatype>::iterator erase(typename DxList<datatype>::iterator position);

		void print();
		void fill(int size, int initialValue = 0);
		void rand(int size);

	private:
		typename DxList<datatype>::iterator it;
};

// Returns an iterator to the first element in the rope
template <typename datatype>
typename DxList<datatype>::iterator Rope<datatype>::begin() {
	return DxList<datatype>::begin();
}

// Returns an iterator to the last element in the rope
template <typename datatype>
typename DxList<datatype>::iterator Rope<datatype>::end() {
	return DxList<datatype>::end();
}

// Add an element to the end of the rope
template <typename datatype>
void Rope<datatype>::push_back(const datatype& value) {
	return DxList<datatype>::push_back(value);
}

// Add an element to the front of the rope
template <typename datatype>
void Rope<datatype>::push_front(const datatype& value) {
	DxList<datatype>::push_front(value);
}

// Remove the last element of the rope
template <typename datatype>
void Rope<datatype>::pop_back() {
	DxList<datatype>::pop_back();
}

// Remove the first element of the rope
template <typename datatype>
void Rope<datatype>::pop_front() {
	DxList<datatype>::pop_front();
}

// Clear the rope
template <typename datatype>
void Rope<datatype>::clear() {
	DxList<datatype>::clear();
}

// Check if the rope is empty
template <typename datatype>
bool Rope<datatype>::empty() const {
	return DxList<datatype>::empty();
}

// Get the size of the rope
template <typename datatype>
size_t Rope<datatype>::size() const {
	return DxList<datatype>::size();
}

// Insert an element at a specific position
template <typename datatype>
typename DxList<datatype>::iterator Rope<datatype>::insert(typename DxList<datatype>::iterator pos, const datatype& value) {
	return DxList<datatype>::insert(pos, value);
}

// Erase an element at a specific position
template <typename datatype>
typename DxList<datatype>::iterator Rope<datatype>::erase(typename DxList<datatype>::iterator pos) {
	return DxList<datatype>::erase(pos);
}

// Print the contents of the rope using the STD implementation
template <typename datatype>
void Rope<datatype>::print() {
	DxList<datatype>::print();
}

// Fill the rope with values
template <typename datatype>
void Rope<datatype>::fill(int size, int initialValue) {
	DxList<datatype>::fill(size, initialValue);
}

// Fill the rope with random values
template <typename datatype>
void Rope<datatype>::rand(int size) {
	DxList<datatype>::rand(size);
}
