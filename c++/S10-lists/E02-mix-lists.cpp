#include <iostream>
#include <list>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxlist.cpp"

#define INT_MIN -2147483648

std::list<int> mixLists(const std::list<int> &firstList, const std::list<int> &secondList) {
    std::list<int> mergedList;
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


void fillList(std::list<int> &firstList, std::list<int> &secondList, int size) {
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

    std::list<int> firstList, secondList;
    fillList(firstList, secondList, listSize);

    std::cout << "\n\e[0;33mFirst List\e[0m:\n";
    printList(firstList);

    std::cout << "\n\e[0;33mSecond List\e[0m:\n";
    printList(secondList);

    std::list<int> mergedList = mixLists(firstList, secondList);
    std::cout << "\n\e[0;33mMixed List\e[0m:\n";
    printList(mergedList);
    std::cout << "\n";

    return 0;
}
