#include <iostream>
#include <list>
#include <string>

#pragma once

template <typename datatype>
class DxList : public std::list<datatype> {
	public:
		void print() const;
		void fill(int size, int initialValue = 0);
		void rand(int size);
};

// Print the contents of the list using the STD implementation
template <typename datatype>
void DxList<datatype>::print() const {
	int nodeIndex = 1;
	int maxNumber = std::to_string(this->size()).length();
	for (auto iterator = this->begin(); iterator != this->end(); ++iterator) {
		printf("Node %0*d: [\e[0;33m%d\e[0m]\n", maxNumber, nodeIndex, *iterator);
		nodeIndex++;
	}
}

// Fill the list with values
template <typename datatype>
void DxList<datatype>::fill(int size, int initialValue) {
	for (int i = initialValue; i < size + initialValue; i++) {
		this->push_back(i);
	}
}

// Fill the list with random values
template <typename datatype>
void DxList<datatype>::rand(int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		this->push_back(::rand() % size);
	}
}
