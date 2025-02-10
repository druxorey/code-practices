#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxlist.cpp"

void printList(list<char> &myList, int start, int end) {
	int nodeIndex = start;

	list<char>::iterator listIterator = myList.first();
	for (int i = 0; i < start; i++) myList.next(listIterator);
	for (int i = 0; i < end; i++) {
		int retrievedArr = *myList.get(listIterator);
		printf("Node %d: [%c]\n", nodeIndex, retrievedArr);
		myList.next(listIterator);
		nodeIndex++;
	}
}


void fillList(list<char> &myList, int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		myList.insert(myList.first(), (rand() % 26) + 'a');
	}
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= N VALUES =========]\e[0m\n\n";

	int listSize, start, end;

	getcin("Enter the list size: ", listSize);
	getcin("Enter the start point: ", start);
	getcin("Enter the n digits to print: ", end);

	list<char> circularList;
	fillList(circularList, listSize);

	printf("\n\e[0;33mInitial List\e[0m:\n");
	printList(circularList);

	printf("\n\e[0;33mThe %d digits after %d are\e[0m:\n", end, start);
	printList(circularList, start, end);

	return 0;
}
