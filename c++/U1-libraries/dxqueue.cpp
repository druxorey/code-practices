#include <iostream>
#include <queue>

template <typename datatype>
class dxqueue : public std::queue<datatype> {
	public:
		void fill(int size, int initialValue = 0);
		void rand(int size);
};

// Fill the queue with values
template <typename datatype>
void dxqueue<datatype>::fill(int size, int initialValue) {
	for (int i = initialValue; i < size + initialValue; i++) {
		this->push(i);
	}
}

// Fill the queue with random values
template <typename datatype>
void dxqueue<datatype>::rand(int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		this->push(::rand() % size);
	}
}

void printQueue(dxqueue<int> queue) {
	int size = queue.size(), index = 1;
	int maxNumber = std::to_string(queue.size()).length();
	while (!queue.empty()) {
		if (index == 1) printf("   Top %0*d : [\e[0;32m%d\e[0m]\n", maxNumber, index, queue.front());
		else if (index == size) printf("Bottom %0*d : [\e[0;31m%d\e[0m]\n", maxNumber, index, queue.front());
		else printf("       %0*d : [\e[0;33m%d\e[0m]\n", maxNumber, index, queue.front());
		queue.pop();
		index++;
	}
}
