#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxring.cpp"

void printCircularList(ring<char> &myList, int start, int end) {
    int nodeIndex = start;

    for (int i = 0; i < start - 1; i++) myList.next();

    for (int i = 0; i < end; i++) {
        char retrievedArr = myList.next();
        printf("Node %d: [%c]\n", nodeIndex, retrievedArr);
        nodeIndex = (nodeIndex >= myList.size())? 1 : nodeIndex + 1;
    }
}


void fillList(ring<char> &myList, int size) {
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

	ring<char> circularList;
	fillList(circularList, listSize);

	printf("\n\e[0;33mInitial List\e[0m:\n");
	circularList.print();

	printf("\n\e[0;33mThe %d digits after %d are\e[0m:\n", end, start);
	printCircularList(circularList, start, end);

	return 0;
}
