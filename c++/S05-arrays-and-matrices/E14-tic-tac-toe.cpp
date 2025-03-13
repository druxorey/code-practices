#include <iostream>
#include "../U1-libraries/dxinput.hpp"

char POSITIONS[9];
char PLAYER = 'x';
char COMPUTER = 'o';
char WINNER = ' ';

void printBoard() {
	system("clear");
	std::cout << "\n\e[0;35m[========= TIC TAC TOE =========]\e[0m\n\n";
	for (int i = 0; i < 3; i++) {
		printf("           ");
		for (int j = 0; j < 3; j++) {
			printf(" %c ", POSITIONS[i * 3 + j]);
			if (j != 2) printf("│");
		}
		if (i != 2) printf("\n           ───┼───┼───\n");
	}
	printf("\n\n");
}


bool putPosition(short position, char character) {
	if (POSITIONS[position] == ' ') {
		POSITIONS[position] = character;
		return true;
	}
	return false;
}


bool checkGameStatus() {
	// Check rows and columns
	for (int i = 0; i < 3; i++) {
		if (POSITIONS[i] == POSITIONS[i + 3] && POSITIONS[i] == POSITIONS[i + 6] && POSITIONS[i] != ' ') {
			WINNER = POSITIONS[i];
			return true;
		}
	}

	for (int i = 0; i < 9; i += 3) {
		if (POSITIONS[i] == POSITIONS[i + 1] && POSITIONS[i] == POSITIONS[i + 2] && POSITIONS[i] != ' ') {
			WINNER = POSITIONS[i];
			return true;
		}
	}

	// Check diagonals
	if (POSITIONS[0] == POSITIONS[4] && POSITIONS[0] == POSITIONS[8] && POSITIONS[0] != ' ') {
		WINNER = POSITIONS[0];
		return true;
	}

	if (POSITIONS[2] == POSITIONS[4] && POSITIONS[2] == POSITIONS[6] && POSITIONS[2] != ' ') {
		WINNER = POSITIONS[0];
		return true;
	}

	// Check if the board is full to end the game as a draw
	bool isFull = true;
	for (int i = 0; i < 9; i++) {
		if (POSITIONS[i] == ' ') {
			std::cout << POSITIONS[i];
			isFull = false;
		}
	}

	return isFull;
}


int generateRandomPosition() {
	return rand() % 9;
}


int main() {
	srand(time(NULL));
	std::fill(POSITIONS, POSITIONS + 9, ' ');

	bool isGame, isValid;
	short position;

	do {
		isValid = true;

		do {
			printBoard();
			if (!isValid) printf("\e[1;31mWARNING: The position is already taken.\e[0m\n");
			getcin("Enter the position [1-9]: ", position);

			if (putPosition(position - 1, PLAYER)) {
				isValid = true;
				isGame = checkGameStatus();
				break;
			}

			isValid = false;

		} while (!isValid);

		while (!isGame) {
			position = generateRandomPosition();
			if (putPosition(position, COMPUTER)) {
				isGame = checkGameStatus();
				break;
			}
		}

	} while (!isGame);

	printBoard();

	std::cout << "\e[0;35m[========= GAME OVER =========]\e[0m\n\n";
	if (WINNER == ' ') {
		std::cout << "\e[0;33mThe game ended in a draw.\e[0m\n";
	} else if (WINNER == PLAYER) {
		std::cout << "\e[0;32mCongratulations! You won the game.\e[0m\n";
	} else {
		std::cout << "\e[0;31mThe computer won the game.\e[0m\n";
	}

	printf("\n");

	return 0;
}
