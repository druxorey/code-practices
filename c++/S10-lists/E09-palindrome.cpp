#include <iostream>
#include "../U1-libraries/dxinput.hpp"
#include "../U1-libraries/dxrope.hpp"
#include "../U1-libraries/dxarray.hpp"


void strToRope(rope<char> &dataRope, std::string word) {
	for(const char &c : word) {
		dataRope.push_back(c);
	}
}


bool isPalindrome(rope<char> &dataRope) {
	std::string word;
	for(const char &c : dataRope) word.insert(word.begin(), c);
	int index = 0;
	for(const char &c : dataRope) {
		if (c != word[index]) return false;
		index++;
	}
	return true;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PALINDROME =========]\e[0m\n\n";

	std::string word = "anitalavalatina";
	getcin("Enter a word: ", word);

	rope<char> dataRope;
	strToRope(dataRope, word);
	dataRope.print();

	if (isPalindrome(dataRope)) {
		std::cout << "\n\e[0;32mThe list is a palindrome.\e[0m\n";
	} else {
		std::cout << "\n\e[0;31mThe list is not a palindrome.\e[0m\n";
	}

	return 0;
}
