#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxmatrix.cpp"


bool scalable(bool **matrix, int size, int i = 0) {
	if (size <= i || i == size / 2) return true;

	bool isScalable = false;

	for (int j = i; j < size; j++) {
		if (matrix[i][j] || matrix[size-1][j] || matrix[j][i] || matrix[j][size-1]) {
			isScalable = true;
			break;
		}
	}

	if (!isScalable) return false;

	return scalable(matrix, size - 1, i+1);
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= SCALABLE TOWER =========]\e[0m\n\n";

	unsigned int size = 0;

	srand(time(NULL));

	getcin("Enter the tower size: ", size);

	bool **tower = new bool*[size];
	for (int i = 0; i < size; i++) tower[i] = new bool[size];

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if ((rand() % size) == j) tower[i][j] = true;
			else tower[i][j] = false;
		}
	}

	printMatrix(tower, size);

	if (scalable(tower, size)) {
		std::cout << "\e[0;32mThe tower is scalable\n";
	} else {
		std::cout << "\e[0;31mThe tower is not scalable\n";
	}

	for (int i = 0; i < size; i++) delete[] tower[i];
	delete[] tower;

	return 0;
}
