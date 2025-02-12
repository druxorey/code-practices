#include <iostream>
#include <list>

template <typename datatype>
class dxlist : public std::list<datatype> {
	public:
		void print();
		void fill(int size, int initialValue = 0);
		void rand(int size);
};

// Print the contents of the list using the STD implementation
template <typename datatype>
void dxlist<datatype>::print() {
    int nodeIndex = 1;
    for (auto iterator = this->begin(); iterator != this->end(); ++iterator) {
        std::cout << "Node " << nodeIndex << ": [" << *iterator << "]" << std::endl;
        nodeIndex++;
    }
}

// Fill the list with values
template <typename datatype>
void dxlist<datatype>::fill(int size, int initialValue) {
    for (int i = initialValue; i < size + initialValue; i++) {
		this->push_back(i);
	}
}

// Fill the list with random values
template <typename datatype>
void dxlist<datatype>::rand(int size) {
	srand(time(NULL));
    for (int i = 0; i < size; i++) {
		this->push_back(::rand() % size);
	}
}
