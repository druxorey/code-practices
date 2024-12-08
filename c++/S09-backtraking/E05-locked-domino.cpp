#include <iostream>
#include <string>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxarray.cpp"

const short SIZE = 28;

void generateDomino(std::string array[]) {
	int index = 0;
	for (int i = 0; i < SIZE / 4 ; i++) {
		for (int j = 0; j <= i; j++) {
			array[index] = std::to_string(j) + std::to_string(i);
			index++;
		}
	}
}


std::string startGame(bool usedPieces[], std::string dominoPieces[]) {
	usedPieces[SIZE - 1] = true;
	return dominoPieces[SIZE - 1];
}


void getLockedDomino(bool usedPieces[], std::string dominoPieces[], std::string numbersAtPlay , short usedPiecesCounter = 0) {
    if (usedPiecesCounter == SIZE) return;

    bool isLocked = true;


	for (int i = 0; i < SIZE; i++) {
		char left = numbersAtPlay[0];
		char right = numbersAtPlay[numbersAtPlay.size() - 1];

		if (usedPieces[i] == false) {
			std::string piece = dominoPieces[i];
			std::string newNumbersAtPlay;

			if (piece[0] != left && piece[0] != right && piece[1] != left && piece[1] != right) {
				continue;
			}

			usedPieces[i] = true;
			usedPiecesCounter++;

			if (piece[0] == right) {
				isLocked = false;
				newNumbersAtPlay = numbersAtPlay + " " + piece.substr(0, 1) + piece.substr(1, 1);
				getLockedDomino(usedPieces, dominoPieces, newNumbersAtPlay, usedPiecesCounter);
			}
			if (piece[1] == right) {
				isLocked = false;
				newNumbersAtPlay = numbersAtPlay + " " + piece.substr(1, 1) + piece.substr(0, 1);
				getLockedDomino(usedPieces, dominoPieces, newNumbersAtPlay, usedPiecesCounter);
			}
			if (piece[0] == left) {
				isLocked = false;
				newNumbersAtPlay = piece.substr(1, 1) + piece.substr(0, 1) + " " + numbersAtPlay;
				getLockedDomino(usedPieces, dominoPieces, newNumbersAtPlay, usedPiecesCounter);
			}
			if (piece[1] == left) {
				isLocked = false;
				newNumbersAtPlay = piece.substr(0, 1) + piece.substr(1, 1) + " " + numbersAtPlay;
				getLockedDomino(usedPieces, dominoPieces, newNumbersAtPlay, usedPiecesCounter);
			}

			usedPiecesCounter--;
			usedPieces[i] = false;
		}
	}

    if (isLocked && numbersAtPlay[0] == numbersAtPlay[numbersAtPlay.size() - 1]) {
		std::cout << "Locked Domino: " << numbersAtPlay << '\n';
		std::cout << "Total pieces: " << usedPiecesCounter << '\n';
		return;
	}
}


int main() {
	std::cout << "\n\e[0;35m[========= LOCKED DOMINO =========]\e[0m\n" << '\n';

	std::string dominoPieces[SIZE];
	bool usedPieces[SIZE] = {0};

	generateDomino(dominoPieces);
	printArray(dominoPieces, SIZE);

	std::string numbersAtPlay = startGame(usedPieces, dominoPieces);
	getLockedDomino(usedPieces, dominoPieces, numbersAtPlay);

	return 0;
}
