#include <iostream>
#include "../U1-libraries/dxinput.hpp"
#include "../U1-libraries/dxlist.hpp"

void getEvenOdd(dxlist<int> &initialList, dxlist<int> &oddList, dxlist<int> &evenList){
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

	int listSize;
	dxlist<int> initialList, oddList, evenList;

	getcin("Enter the list size: ", listSize);
	initialList.fill(listSize);

	printf("\n\e[0;33mInitial List\e[0m:\n");
	initialList.print();

	getEvenOdd(initialList, oddList, evenList);

	printf("\n\e[0;33mEven List\e[0m:\n");
	evenList.print();

	printf("\n\e[0;33mOdd List\e[0m:\n");
	oddList.print();

	return 0;
}
