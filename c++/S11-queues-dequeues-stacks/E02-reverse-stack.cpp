#include <iostream>
#include "../U1-libraries/dxstack.cpp"
#include "../U1-libraries/dxinput.cpp"

dxstack<int> inverse(dxstack<int> stack) {
	dxstack<int> inverseStack;
	while (!stack.empty()) {
		int element = stack.top();
		printf("Stack [\e[0;33m%d\e[0m]\n", element);
		inverseStack.push(element);
		stack.pop();
	}
	return inverseStack;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= REVERSE STACK =========]\e[0m\n\n";

	int stackSize;
	getcin("Enter the size of the stack: ", stackSize);

	dxstack<int> stack;
	stack.fill(stackSize);

	dxstack<int> inverseStack = inverse(stack);

	return 0;
}
