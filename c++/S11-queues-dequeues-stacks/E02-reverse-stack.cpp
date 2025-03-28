#include <iostream>
#include "../U1-libraries/dxstack.hpp"
#include "../U1-libraries/dxinput.hpp"

DxStack<int> inverse(DxStack<int> stack) {
	DxStack<int> inverseStack;
	while (!stack.empty()) {
		int element = stack.top();
		inverseStack.push(element);
		stack.pop();
	}
	return inverseStack;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= REVERSE STACK =========]\e[0m\n\n";

	int stackSize;
	getcin("Enter the size of the stack: ", stackSize);

	DxStack<int> stack;
	stack.fill(stackSize);
	printf("\n\e[0;34mInitial stack: \e[0m\n\n");
	printStack(stack);

	DxStack<int> inverseStack = inverse(stack);
	printf("\n\e[0;34mInverse stack: \e[0m\n\n");
	printStack(inverseStack);
	printf("\n");

	return 0;
}
