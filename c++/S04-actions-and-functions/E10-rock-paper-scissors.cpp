#include <iostream>

char generateComputerChoise() {
	srand(time(NULL));
	int choise = rand() % 3 + 1;

	switch (choise) {
		case 1:
			return 'r';
			break;
		case 2:
			return 'p';
			break;
		case 3:
			return 's';
			break;
	}

	return 1;
}


std::string getChoise(char choise) {
	switch (choise) {
		case 'r':
			return "Rock";
		case 'p':
			return "Paper";
		case 's':
			return "Scissors";
	}
	return "Invalid";
}


void checkWinner(char playerChoise, char computerChoise) {
	std::cout << '\n';
	std::cout << "You chose " << getChoise(playerChoise) << '\n';
	std::cout << "The computer chose " << getChoise(computerChoise) << '\n';
	std::cout << '\n';

	if (playerChoise == computerChoise) {
		std::cout << "\e[0;33mIt's a tie!\e[0m" << '\n';
	} else if (playerChoise == 'r' && computerChoise == 's' || playerChoise == 'p' && computerChoise == 'r' || playerChoise == 's' && computerChoise == 'p') {
		std::cout << "\e[0;32mYou win!\e[0m" << '\n';
	} else {
		std::cout << "\e[0;31mYou lose!\e[0m" << '\n';
	}
}


int main() {
	char playerChoise, computerChoise;

	do {
		system("clear");
		std::cout << "\n\e[0;35m[========= ROCK PAPER AND SCISSORS =========]\e[0m\n\n";

		std::cout << "Choose one of the following options: " << '\n';
		std::cout << " - [R] Rock" << '\n';
		std::cout << " - [P] Paper" << '\n';
		std::cout << " - [S] Scissors" << '\n';

		std::cout << "Enter your choise: ";
		std::cin >> playerChoise;
	} while (playerChoise != 'r' && playerChoise != 'p' && playerChoise != 's');

	computerChoise = generateComputerChoise();

	checkWinner(playerChoise, computerChoise);

	return 0;
}