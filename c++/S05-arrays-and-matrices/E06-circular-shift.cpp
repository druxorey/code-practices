#include <iostream>
#include "../U1-libraries/dxarray.cpp"
#include "../U1-libraries/dxinput.cpp"

void moveInArray(int array[], int size, int move) {
	int movedArray[size], displace = 0;

	for (int i = 0; i < size; i++) {
		displace = (i - move < 0)? size - (move - i) : i - move ;
		movedArray[displace] = array[i];
	}

	for (int i = 0; i < size; i++) {array[i] = movedArray[i];}
} 


int main() {
	int sizeArray, averageNumber;

	std::cout << "\n\e[0;35m[========= CIRCULAR SHIFT =========]\e[0m\n" << '\n';

	getInput("Enter the size of the array: ", sizeArray);
	getInput("Enter the average number: ", averageNumber);

	int array[sizeArray];

	printf("\n\e[0;33mInitial array\e[0m\n");
	fillArray(array, sizeArray);
	printArray(array, sizeArray);

	printf("\n\e[0;33mMoving %i in the array\e[0m\n", averageNumber);
	moveInArray(array, sizeArray, averageNumber);
	printArray(array, sizeArray);

	return 0;
}
