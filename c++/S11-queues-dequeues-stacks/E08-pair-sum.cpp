#include <iostream>
#include "../U1-libraries/dxstack.hpp"
#include "../U1-libraries/dxinput.hpp"

dxstack<int> getPairs(dxstack<int> stack) {
	dxstack<int> temporalStack;
	int sum;

	while (!stack.empty()) {
		if (stack.size() == 1) {
			temporalStack.push(stack.top());
			stack.pop();
			break;
		}

		sum = stack.top();
		stack.pop();
		sum += stack.top();
		stack.pop();

		temporalStack.push(sum);
	}

	while (!temporalStack.empty()) {
		stack.push(temporalStack.top());
		temporalStack.pop();
	}

	return stack;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PAIR SUM =========]\e[0m\n\n";

	int stackSize;
	getcin("Enter the size of the stack: ", stackSize);

	dxstack<int> stack;
	stack.rand(stackSize);

	printf("\n\e[0;34mInitial stack: \e[0m\n\n");
	printStack(stack);

	dxstack<int> pairStack = getPairs(stack);
	printf("\n\e[0;34mPair stack: \e[0m\n\n");
	printStack(pairStack);

	return 0;
}
