#include <iostream>
#include "../U1-libraries/dxlist.cpp"

const int LIST_SIZE = 10;

void fillList(std::list<int> &evenList) {
	for (int i = 0; i < LIST_SIZE; i++) {
		evenList.insert(evenList.end(), i);
	}
}


void getEvenOdd(std::list<int> &initialList, std::list<int> &oddList, std::list<int> &evenList){
	auto index = initialList.begin();
    while (index != initialList.end()) {
        int value = *index;
        if (value % 2 == 0) {
            evenList.insert(evenList.end(), value);
        } else {
            oddList.insert(oddList.end(), value);
        }
        index++;
	}
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= EVEN ODD =========]\e[0m\n\n";

	std::list<int> initialList, oddList, evenList;

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
