#include <iostream>
#include "../U1-libraries/dxrope.hpp"

void removeDuplicates(rope<int> &dataRope) {
	auto baseNumber = dataRope.begin();
	while (baseNumber != dataRope.end()) {
		auto comparator = baseNumber;
		comparator++;
		while (comparator != dataRope.end()) {
			if (*baseNumber == *comparator) {
				comparator = dataRope.erase(comparator);
			} else {
				comparator++;
			}
		}
		baseNumber++;
	}
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= REMOVE DUPLICATES =========]\e[0m\n\n";

	rope<int> intRope;

	intRope.rand(5);
	printf("\e[0;33mOriginal rope: \e[0m\n");
	intRope.print();

	removeDuplicates(intRope);
	printf("\n\e[0;33mRope without duplicates: \e[0m\n");
	intRope.print();

	return 0;
}
