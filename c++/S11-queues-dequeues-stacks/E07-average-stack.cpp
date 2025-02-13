#include <iostream>
#include "../U1-libraries/dxstack.cpp"
#include "../U1-libraries/dxinput.cpp"

float getAverage(dxstack<int> stack) {
	float finalAverage = 0, size = stack.size();

	while (!stack.empty()) {
		printf("Current average: %d\n", stack.top());
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

	float average = getAverage(stack);
	printf("\n\e[0;32mThe average of the stack is: %.2f\e[0m\n\n", average);

	return 0;
}
