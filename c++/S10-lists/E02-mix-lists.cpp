#include <iostream>
#include "../U1-libraries/dxinput.hpp"
#include "../U1-libraries/dxlist.hpp"

#define INT_MIN -2147483648

dxlist<int> mixLists(const dxlist<int> &firstList, const dxlist<int> &secondList) {
	dxlist<int> mergedList;
	auto firstListIterator = firstList.rbegin();
	auto secondListIterator = secondList.rbegin();

	while (firstListIterator != firstList.rend() || secondListIterator != secondList.rend()) {
		int firstListValue = (firstListIterator != firstList.rend()) ? *firstListIterator : INT_MIN;
		int secondListValue = (secondListIterator != secondList.rend()) ? *secondListIterator : INT_MIN;

		if (firstListValue > secondListValue) {
			mergedList.push_front(firstListValue);
			if (firstListIterator != firstList.rend()) ++firstListIterator;
		} else {
			mergedList.push_front(secondListValue);
			if (secondListIterator != secondList.rend()) ++secondListIterator;
		}
	}

	return mergedList;
}


void fillList(dxlist<int> &firstList, dxlist<int> &secondList, int size) {
	int nodeIndex = 0;

	for (int i = 0; i < size; i++) {
		firstList.push_back(nodeIndex);
		secondList.push_back(nodeIndex + 1);
		nodeIndex += 2;
	}
}


int main() {
	std::cout << "\n\e[0;35m[========= MIX LISTS =========]\e[0m\n\n";

	int listSize;
	std::cout << "Enter the size of the lists: ";
	std::cin >> listSize;

	dxlist<int> firstList, secondList;
	fillList(firstList, secondList, listSize);

	std::cout << "\n\e[0;33mFirst List\e[0m:\n";
	firstList.print();

	std::cout << "\n\e[0;33mSecond List\e[0m:\n";
	secondList.print();

	dxlist<int> mergedList = mixLists(firstList, secondList);
	std::cout << "\n\e[0;33mMixed List\e[0m:\n";
	mergedList.print();
	std::cout << "\n";

	return 0;
}
