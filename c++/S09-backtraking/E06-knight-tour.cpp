#include <iostream>
#include <string>
#include <vector>

typedef std::vector<std::string> squares;

bool board[8][8] = {false};

void printBoard(squares movesMade) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d ", board[i][j]);
        }
    	printf("\n");
    }

	printf("\n\e[0;35mMOVEMENTS MADE: [\e[0m ");
	for (int i = 0; i < movesMade.size(); i++) {
		std::cout << movesMade[i] << " ";
	}
	printf("\e[0;35m]\e[0m\n\n");
}


bool isValidMove(int xPosition, int yPosition) {
    if (xPosition >= 0 && xPosition < 8 && yPosition >= 0 && yPosition < 8 && !board[yPosition][xPosition]) {
        return true;
    }
    return false;
}


std::string positionToString(int xPosition, int yPosition) {
    char column = 'A' + xPosition;
    char row = '8' - yPosition;
    return std::string(1, column) + std::string(1, row);
}


bool getKnightTour(int xPosition, int yPosition, squares &movesMade) {
    if (movesMade.size() == 64) {
        printf("The knight has completed the tour.\n");
        printBoard(movesMade);
        return true;
    }

    if (isValidMove(xPosition, yPosition)) {
        board[yPosition][xPosition] = true;
		movesMade.push_back(positionToString(xPosition, yPosition));

        if (getKnightTour(xPosition + 2, yPosition + 1, movesMade)) return true;
        if (getKnightTour(xPosition + 2, yPosition - 1, movesMade)) return true;
        if (getKnightTour(xPosition - 2, yPosition + 1, movesMade)) return true;
        if (getKnightTour(xPosition - 2, yPosition - 1, movesMade)) return true;
        if (getKnightTour(xPosition + 1, yPosition + 2, movesMade)) return true;
        if (getKnightTour(xPosition + 1, yPosition - 2, movesMade)) return true;
        if (getKnightTour(xPosition - 1, yPosition + 2, movesMade)) return true;
        if (getKnightTour(xPosition - 1, yPosition - 2, movesMade)) return true;

        board[yPosition][xPosition] = false;
		movesMade.pop_back();
    }
    return false;
}


int main() {
    std::cout << "\n\e[0;35m[========= KNIGHT TOUR =========]\e[0m\n" << '\n';
	squares movesMade;
    getKnightTour(7, 0, movesMade);
    return 0;
}
