#include <iostream>
#include "../U1-libraries/dxstack.hpp"
#include "../U1-libraries/dxinput.hpp"

dxstack<int> sumStacks(dxstack<int> first, dxstack<int> second) {
	dxstack<int> result;
	int firstValue, secondValue, sum;

	while (!first.empty() && !second.empty()) {
		firstValue = first.top();
		secondValue = second.top();

		sum = firstValue + secondValue;

		printf("\nSum of \e[0;33m%d\e[0m and \e[0;33m%d\e[0m is \e[0;32m%d\e[0m", firstValue, secondValue, sum);

		first.pop();
		second.pop();

		result.push(sum);
	}

	return result;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= BINARY SUM =========]\e[0m\n\n";

	int stackSize;
	getcin("Enter the size of the stack: ", stackSize);

	dxstack<int> firstStack, secondStack, resultStack;

	firstStack.rand(stackSize);
	secondStack.rand(stackSize);

	resultStack = sumStacks(firstStack, secondStack);

	printf("\n\n\e[0;34mResult stack: \e[0m\n\n");
	printStack(resultStack);
	printf("\n");

	return 0;
}
