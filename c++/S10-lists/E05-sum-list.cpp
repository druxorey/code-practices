#include <iostream>
#include "../U1-libraries/dxinput.hpp"
#include "../U1-libraries/dxlist.hpp"

int sumList(DxList<int> &myList, int size) {
	int finalSum = 0;
	auto index = myList.begin();

	for (int i = 0; i < size; i++) {
		finalSum += *index;
		index++;
	}

	return finalSum;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= SUM LIST =========]\e[0m\n\n";

	int listSize, finalSum;
	getcin("Enter the list size: ", listSize);

	DxList<int> intList;
	intList.rand(listSize);
	intList.print();

	finalSum = sumList(intList, listSize);
	printf("The sum of all elements in the list is: \e[0;32m%d\e[0m\n", finalSum);

	return 0;
}
