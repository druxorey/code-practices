#include <iostream>
#include "../U1-libraries/dxlist.cpp"

const int LIST_SIZE = 10;

void fillList(list<int> &evenList) {
	for (int i = 0; i < LIST_SIZE; i++) {
		evenList.insert(evenList.last(), i, false);
	}
}


void getEvenOdd(list<int> &initialList, list<int> &oddList, list<int> &evenList){
	list<int>::iterator index = initialList.first();
    while (index != nullptr) {
        int value = *initialList.get(index);
        if (value % 2 == 0) {
            evenList.insert(evenList.last(), value, false);
        } else {
            oddList.insert(oddList.last(), value, false);
        }
        initialList.next(index);
	}
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= EVEN ODD =========]\e[0m\n\n";

	list<int> initialList, oddList, evenList;

	fillList(initialList);
	printf("\n\e[0;33mInitial List\e[0m:\n");
	printList(initialList);

	getEvenOdd(initialList, oddList, evenList);

	printf("\n\e[0;33mEven List\e[0m:\n");
	printList(evenList);

	printf("\n\e[0;33mOdd List\e[0m:\n");
	printList(oddList);

	return 0;
}
