#include <iostream>

template <typename datatype>
void printArray(datatype array[], int size) {
	std::cout << '\n' << "\e[0;33mThe array is: \e[0;34m[\e[0m";
	for (int i = 0; i < size; i++) {
		std::cout << array[i];
		if (i != size - 1) {
			std::cout << ",";
		}
	}
	std::cout << "\e[0;34m]\e[0m" << '\n';
}


void randArray(int array[], int size) {
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		array[i] = rand() % (size * 2);
	}
}


void fillArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		array[i] = i ;
	}
}


void fillArray(char array[], int size) {
	for (int i = 0; i < size; i++) {
		array[i] = i + 'a';
	}
}
