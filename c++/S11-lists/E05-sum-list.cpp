#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxlist.cpp"

void randList(list<int> &myList, int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		myList.insert(myList.first(), (rand() % (size * size)));
	}
}


int sumList(list<int> &myList, int size) {
	int finalSum = 0;
	list<int>::iterator index = myList.first();

	for (int i = 0; i < size; i++) {
		finalSum += *myList.get(index);
		myList.next(index);
	}

	return finalSum;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= SUM LIST =========]\e[0m\n\n";

	int listSize, finalSum;
	getcin("Enter the list size: ", listSize);

	list<int> intList;
	randList(intList, listSize);

	printList(intList);

	finalSum = sumList(intList, listSize);

	printf("The sum of all elements in the list is: \e[0;32m%d\e[0m\n", finalSum);

	return 0;
}
