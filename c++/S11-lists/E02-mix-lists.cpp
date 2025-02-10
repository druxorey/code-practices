#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxlist.cpp"


void printList(list<int> &myList) {
	list<int>::iterator listIterator = myList.first();
	int nodeIndex = 1;
	while (listIterator != nullptr) {
		int retrievedArr = *myList.get(listIterator);
		printf("Node %d: [%d]\n", nodeIndex, retrievedArr);
		myList.next(listIterator);
		nodeIndex++;
	}
}


list<int> mixLists(list<int> &firstList, list<int> &secondList) {
	list<int> mergedList;
	int listSize = firstList.size() + secondList.size();

	list<int>::iterator firstListIterator = firstList.last();
	list<int>::iterator secondListIterator = secondList.last();

	for (int i = 0; i < listSize; i++) {
        int firstListValue = (firstListIterator != nullptr) ? *firstList.get(firstListIterator) : -listSize;
        int secondListValue = (secondListIterator != nullptr) ? *secondList.get(secondListIterator) : -listSize;

		if (firstListValue > secondListValue) {
			mergedList.insert(mergedList.first(), firstListValue);
			firstList.prev(firstListIterator);
		} else {
			mergedList.insert(mergedList.first(), secondListValue);
			secondList.prev(secondListIterator);
		}
	}

	return mergedList;
}


void fillList(list<int> &firstList, list<int> &secondList, int size) {
	int nodeIndex = 0;

	for (int i = 0; i < size; i++) {
		firstList.insert(firstList.first(), size * 2 - nodeIndex);
		secondList.insert(secondList.first(), size * 2 - nodeIndex + 1);
		nodeIndex += 2;
	}

}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= MIX LISTS =========]\e[0m\n\n";

	int listSize;
	getcin("Enter the size of the lists: ", listSize);

	list<int> firstList, secondList;
	fillList(firstList, secondList, listSize);

	printf("\n\e[0;33mFirst List\e[0m:\n");
	printList(firstList);

	printf("\n\e[0;33mSecond List\e[0m:\n");
	printList(secondList);

	list<int> mergedList = mixLists(firstList, secondList);
	printf("\n\e[0;33mMixed List\e[0m:\n");
	printList(mergedList);
	printf("\n");

	return 0;
}
