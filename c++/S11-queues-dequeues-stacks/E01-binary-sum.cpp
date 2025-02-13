#include <iostream>
#include "../U1-libraries/dxstack.cpp"
#include "../U1-libraries/dxinput.cpp"

dxstack<int> sumStacks(dxstack<int> first, dxstack<int> second) {
	dxstack<int> result;
	int firstValue, secondValue, sum;

	while (!first.empty() && !second.empty()) {
		firstValue = first.top();
		secondValue = second.top();

		sum = firstValue + secondValue;

		printf("Sum of \e[0;33m%d\e[0m and \e[0;33m%d\e[0m is \e[0;32m%d\e[0m\n", firstValue, secondValue, sum);

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

	return 0;
}
