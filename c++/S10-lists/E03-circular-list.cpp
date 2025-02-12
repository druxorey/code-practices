#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxlist.cpp"
#include "../U1-libraries/dxcircular_list.cpp"

void printCircularList(circularList<char> &myList, int start, int end) {
    int nodeIndex = start;

    for (int i = 0; i < start; i++) myList.next();

    for (int i = 0; i < end; i++) {
		if (nodeIndex >= myList.size()) nodeIndex = 1;
        char retrievedArr = myList.next();
        printf("Node %d: [%c]\n", nodeIndex, retrievedArr);
        nodeIndex++;
    }
}


void fillList(circularList<char> &myList, int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		myList.add((rand() % 26) + 'a');
	}
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= CIRCULAR LIST =========]\e[0m\n\n";

	int listSize, start, end;

	getcin("Enter the list size: ", listSize);
	getcin("Enter the start point: ", start);
	getcin("Enter the n digits to print: ", end);

	circularList<char> circularList;
	fillList(circularList, listSize);

	printf("\n\e[0;33mInitial List\e[0m:\n");
	printList(circularList);

	printf("\n\e[0;33mThe %d digits after %d are\e[0m:\n", end, start);
	printCircularList(circularList, start, end);

	return 0;
}
