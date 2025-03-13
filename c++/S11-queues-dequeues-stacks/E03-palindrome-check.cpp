#include <iostream>
#include "../U1-libraries/dxstack.hpp"
#include "../U1-libraries/dxinput.hpp"

dxstack<char> strToStack(std::string str) {
	dxstack<char> stack;
	for(const char &c : str) stack.push(c);
	return stack;
}


bool isPalindrome(dxstack<char> stack) {
	int size = stack.size();
	dxstack<char> fistHalf;

	for (int i = 0; i < size / 2; i++) {
		fistHalf.push(stack.top());
		stack.pop();
	}

	if (size % 2 != 0) stack.pop();

	for (int i = 0; i < size / 2; i++) {
		if (fistHalf.top() != stack.top()) return false;
		fistHalf.pop();
		stack.pop();
	}

	return true;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PALINDROME CHECK =========]\e[0m\n\n";

	std::string word;
	getcin("Enter a word: ", word);

	dxstack<char> stack = strToStack(word);

	if (isPalindrome(stack))
		printf("\n\e[0;32mThe word \"%s\" is a palindrome\e[0m\n\n", word.c_str());
	else
		printf("\n\e[0;31mThe word \"%s\" is not a palindrome\e[0m\n\n", word.c_str());

	return 0;
}
