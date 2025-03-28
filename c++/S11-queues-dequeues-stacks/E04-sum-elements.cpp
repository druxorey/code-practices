#include <iostream>
#include "../U1-libraries/dxstack.hpp"
#include "../U1-libraries/dxinput.hpp"

int getSum(DxStack<int> stack, int sumSize) {
	int finalSum = 0;
	DxStack<int> temporalStack;

	for (int i = 0; i <= (stack.size() - sumSize); i++) {
		temporalStack.push(stack.top());
		stack.pop();
	}

	while (!stack.empty()) {
		finalSum += stack.top();
		stack.pop();
	}

	return finalSum;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= SUM ELEMENTS =========]\e[0m\n\n";

	int stackSize, sumSize;
	getcin("Enter the size of the stack: ", stackSize);
	getcin("Enter the number of elements to sum: ", sumSize);

	DxStack<int> stack;
	stack.fill(stackSize, 1);
	printf("\n\e[0;34mInitial stack: \e[0m\n\n");
	printStack(stack);

	int finalSum = getSum(stack, sumSize);
	printf("\n\e[0;32mThe sum of the last %d elements is: %d\e[0m\n\n", sumSize, finalSum);

	return 0;
}
