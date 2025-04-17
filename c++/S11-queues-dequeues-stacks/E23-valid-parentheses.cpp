#include <iostream>
#include <unordered_map>
#include "../U1-libraries/dxstack.hpp"
#include "../U1-libraries/dxinput.hpp"

#ifdef ENABLE_TESTS
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#endif


bool areParenthesesValid(std::string inputString) {
    DxStack<char> openBrackets;
    std::unordered_map<char, char> bracketPairs = {
        {'{', '}'},
        {'(', ')'},
        {'[', ']'},
    };

    for (const char& character : inputString) {
        if (character == ')' || character == '}' || character == ']') {
            if (openBrackets.empty()) return false;
            if (bracketPairs[openBrackets.top()] != character) return false;
            openBrackets.pop();
            continue;
        }
        openBrackets.push(character);
    }

    if (!openBrackets.empty()) return false;
    return true;
}


#ifdef ENABLE_TESTS
TEST_CASE("Testing areParenthesesValid function") {
    CHECK(areParenthesesValid("()") == true);
    CHECK(areParenthesesValid("()[]{}") == true);
    CHECK(areParenthesesValid("(]") == false);
    CHECK(areParenthesesValid("([)]") == false);
    CHECK(areParenthesesValid("{[]}") == true);
    CHECK(areParenthesesValid("") == true);
    CHECK(areParenthesesValid("(((((((((())))))))))") == true);
    CHECK(areParenthesesValid("(((((((((()))))))))") == false);
    CHECK(areParenthesesValid("}") == false);
    CHECK(areParenthesesValid("{") == false);
}
#endif


#ifndef ENABLE_TESTS
int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= VALID PARENTHESES =========]\e[0m\n\n";

	std::string inputString;
	getcin("Enter a string of parentheses: ", inputString);

	if (areParenthesesValid(inputString)) {
		std::cout << "\n\e[1;32m[RESULT]\e[0m The parentheses are valid.\n\n";
	} else {
		std::cout << "\n\e[1;31m[RESULT]\e[0m The parentheses are not valid.\n\n";
	}

	return 0;
}
#endif
