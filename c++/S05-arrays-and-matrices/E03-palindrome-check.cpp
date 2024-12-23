#include <iostream>
#include "../U1-libraries/dxinput.cpp"

bool isPalindrome(std::string text) { 
	int length = text.length(); 

	for (int i = 0 ; i <= length / 2 ; i++) {
		if (text[length - 1 - i] != text[i]) {
			return false;
		}
	}

	return true;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PALINDROME CHECK =========]\e[0m\n\n";

	std::string inputText;

	getcin("Enter the string: ", inputText);

	if (isPalindrome(inputText)) {
		printf("The string is a palindrome.\n");
	} else {
		printf("The string is not a palindrome.\n");
	}

	return 0;
}
