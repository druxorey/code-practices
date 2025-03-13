#include <iostream>
#include "../U1-libraries/dxstack.hpp"
#include "../U1-libraries/dxinput.hpp"

float getAverage(dxstack<int> stack) {
	float finalAverage = 0, size = stack.size();

	while (!stack.empty()) {
		finalAverage += stack.top();
		stack.pop();
	}

	return finalAverage / size;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= AVERAGE STACK =========]\e[0m\n\n";

	int stackSize;
	getcin("Enter the size of the stack: ", stackSize);

	dxstack<int> stack;
	stack.rand(stackSize);
	printf("\n\e[0;34mInitial stack: \e[0m\n\n");
	printStack(stack);

	float average = getAverage(stack);
	printf("\n\e[0;32mThe average of the stack is: %.2f\e[0m\n\n", average);

	return 0;
}
