#include <iostream>
#include "../U1-libraries/dxinput.hpp"
#include "../U1-libraries/dxlist.hpp"

struct value {
	int number;
	int occurences = 0;
};

dxlist<value> getOccurences(dxlist<int> list) {
	dxlist<value> uniqueList;

	value firstValue;
	firstValue.number = list.front();
	uniqueList.push_back(firstValue);

	for (const int &number : list) {
		bool isUnique = true;
		for (value &val : uniqueList) {
			if (val.number == number) {
				isUnique = false;
				val.occurences++;
			}
		}
		if (isUnique) {
			value newVal;
			newVal.number = number;
			newVal.occurences = 1;
			uniqueList.push_back(newVal);
		}
	}

	return uniqueList;
}


void printList(dxlist<value> list) {
	int index = 1;
	for (const value &element : list) {
		printf("Node %d: [Number: %d, Occurences: %d]\n", index, element.number, element.occurences);
		index++;
	}
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= UNIQUE COUNT =========]\e[0m\n\n";

	int listSize;
	getcin("Enter the list size: ", listSize);

	dxlist<int> messyList;
	messyList.rand(listSize);
	printf("\n\e[0;33mMessy List\e[0m:\n");
	messyList.print();

	dxlist<value> uniqueList = getOccurences(messyList);
	printf("\n\e[0;33mUnique List\e[0m:\n");
	printList(uniqueList);

	return 0;
}
