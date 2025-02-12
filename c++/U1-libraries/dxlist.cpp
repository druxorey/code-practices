#include <iostream>
#include <list>

// Print the contents of the list using the STD implementation
template <typename datatype>
void printList(const std::list<datatype> &myList) {
    int nodeIndex = 1;
    for (const auto &item : myList) {
        std::cout << "Node " << nodeIndex << ": [" << item << "]" << std::endl;
        nodeIndex++;
    }
}
