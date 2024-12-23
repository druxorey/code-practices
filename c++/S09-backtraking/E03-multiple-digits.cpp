#include <iostream>
#include <string>
#include "../U1-libraries/dxinput.cpp"

const int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

bool isValid(int number) {
	std::string numberStr = std::to_string(number);
	int length = numberStr.length();

	for (int i = length; i > 1; i--) {
		if (number % i != 0) return false;
		number /= 10;
	}

	return true;
}


void printNumbers(int size, int number = 0, int digitCount[10] = nullptr) {
	if (number > size) {
		if (isValid(number)) printf("%d\n", number);
		return;
	}

    if (digitCount == nullptr) {
        int initialDigitCount[10] = {0};
        digitCount = initialDigitCount;
    }

    for (int i = 0; i < 9; i++) {
        int digit = numbers[i];
        if (digitCount[digit] == 0) {
            digitCount[digit]++;
            printNumbers(size, number * 10 + digit, digitCount);
            digitCount[digit]--;
        }
    }
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= MULTIPLE DIGITS =========]\e[0m\n\n";

	int size, limit = 1;

	getcin("Enter the max digits: ", size);

	while (size - 1 > 0) {
		limit *= 10;
		size--;
	}

	printNumbers(limit);

	return 0;
}
