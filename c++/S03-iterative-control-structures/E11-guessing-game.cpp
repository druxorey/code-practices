#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= GUESSING GAME =========]\e[0m\n\n";

	int number = 0, guess = 0, tries = 0;

	srand(time(NULL));

	number = rand() % 100 + 1;

	do {
		std::cout << "Enter a guess between 1 and 100: ";
		std::cin >> guess;
		tries++;
		if (guess > number) {
			std::cout << "Too high!\n";
		} else if (guess < number) {
			std::cout << "Too low!\n";
		} else {
			std::cout << "\n\e[0;32mCorrect! You got it in " << tries << " tries!\e[0m\n";
		}

	} while (guess != number);

    return 0;
}
