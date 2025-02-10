#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxlist.cpp"

typedef list<int> int_list;

void printList(int_list &list) {
	int_list::iterator listIterator = list.first();
	int nodeIndex = 1;
	while (listIterator != nullptr) {
		int retrievedArr = *list.get(listIterator);
		printf("Node %d: [%d]\n", nodeIndex, retrievedArr);
		list.next(listIterator);
		nodeIndex++;
	}
}


int_list mixLists(int_list &firstList, int_list &secondList) {
	int_list mergedList;
	int listSize = firstList.size() + secondList.size();

	int_list::iterator firstListIterator = firstList.last();
	int_list::iterator secondListIterator = secondList.last();

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


void fillList(int_list &firstList, int_list &secondList, int size) {
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

	int_list firstList, secondList;
	fillList(firstList, secondList, listSize);

	printf("\n\e[0;33mFirst List\e[0m:\n");
	printList(firstList);

	printf("\n\e[0;33mSecond List\e[0m:\n");
	printList(secondList);

	int_list mergedList = mixLists(firstList, secondList);
	printf("\n\e[0;33mMixed List\e[0m:\n");
	printList(mergedList);
	printf("\n");

	return 0;
}
