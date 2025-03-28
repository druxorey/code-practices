#include <iostream>
#include "../U1-libraries/dxinput.hpp"
#include "../U1-libraries/dxrope.hpp"

Rope<int> reorderList(Rope<int> list) {
	Rope<int> finalSum;
	int leftIterator = 0;
	int rightIterator = list.size() - 1;

	for (int i = 0; i < list.size() / 2 ; i++) {
		auto iterator = list.begin();

		for (int left = 0; left < leftIterator; left++) iterator++;
		leftIterator++;
		finalSum.push_back(*iterator);

		iterator = list.begin();

		for (int right = 0; right < rightIterator; right++) iterator++;
		rightIterator--;
		finalSum.push_back(*iterator);
	}

	if (list.size() % 2 != 0) {
		auto iterator = list.begin();
		for (int i = 0; i < leftIterator; i++) iterator++;
		finalSum.push_back(*iterator);
	}

	return finalSum;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= REORDERED LIST =========]\e[0m\n\n";

	int listSize;
	getcin("Enter the list size: ", listSize);

	Rope<int> intList;
	intList.fill(listSize, 1);
	printf("\n\e[0;34m Initial List: \e[0m\n\n");
	intList.print();

	Rope<int> reorderedList = reorderList(intList);
	printf("\n\e[0;34m Reordered List: \e[0m\n\n");
	reorderedList.print();

	return 0;
}
