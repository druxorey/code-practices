#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxrope.cpp"

void iterativeInverse(rope<int>& list) {
    int size = list.size();
    for (int i = 0; i < size; i++) {
        auto iterator = list.begin();
        for (int j = 1; j < size - i; j++) {
            iterator++;
        }
        list.push_back(*iterator);
        list.erase(iterator);
    }
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= REVERSE LIST =========]\e[0m\n\n";

	int listSize;
	getcin("Enter the list size: ", listSize);

	rope<int> list;
	list.fill(listSize, 1);
	printf("\n\e[0;33mNormal List\e[0m:\n");
	list.print();

	iterativeInverse(list);
	printf("\n\e[0;33mReversed List\e[0m:\n");
	list.print();

	return 0;
}
