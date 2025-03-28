#include <iostream>
#include <stack>

#pragma once

template <typename datatype>
class DxStack : public std::stack<datatype> {
	public:
		void fill(int size, int initialValue = 0);
		void rand(int size);
};

// Fill the stack with values
template <typename datatype>
void DxStack<datatype>::fill(int size, int initialValue) {
	for (int i = initialValue; i < size + initialValue; i++) {
		this->push(i);
	}
}

// Fill the stack with random values
template <typename datatype>
void DxStack<datatype>::rand(int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		this->push(::rand() % size);
	}
}

inline void printStack(DxStack<int> stack) {
	int size = stack.size(), index = 1;
	int maxNumber = std::to_string(stack.size()).length();
	while (!stack.empty()) {
		if (index == 1) printf("   Top %0*d : [\e[0;32m%d\e[0m]\n", maxNumber, index, stack.top()); 
		else if (index == size) printf("Bottom %0*d : [\e[0;31m%d\e[0m]\n", maxNumber, index, stack.top());
		else printf("       %0*d : [\e[0;33m%d\e[0m]\n", maxNumber, index, stack.top());
		stack.pop();
		index++;
	}
}
