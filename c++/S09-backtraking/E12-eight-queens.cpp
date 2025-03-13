#include <iostream>
#include "../U1-libraries/dxinput.hpp"
#include "../U1-libraries/dxmatrix.hpp"

bool isValid(bool** board, int size, int row, int col) {
	for (int i = 0; i < row; i++)
		if (board[i][col])
			return false;

	for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
		if (board[i][j])
			return false;

	for (int i = row, j = col; i >= 0 && j < size; i--, j++)
		if (board[i][j])
			return false;

	return true;
}


bool nQueens(bool** board, int size, int row = 0, int queens = 0) {
	if (queens == size) return true;
	for (int i = 0; i < size; i++) {
		if(isValid(board, size, row, i)) {
			board[row][i] = true;
			queens++;
			if (nQueens(board, size, row + 1, queens)) return true;
			board[row][i] = false;
			queens--;
		}
	}
	return false;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= EIGHT QUEENS =========]\e[0m\n\n";

	int boardSize;
	getcin("Enter board size: ", boardSize);

	if (boardSize < 4) {
		printf("\n\e[0;31mThe board size must be greater or equal than 4\e[0m\n");
		return 1;
	}

	bool** board = new bool*[boardSize];
	for (int i = 0; i < boardSize; i++) {
		board[i] = new bool[boardSize];
		for (int j = 0; j < boardSize; j++) {
			board[i][j] = false;
		}
	}

	nQueens(board, boardSize);
	printMatrix(board, boardSize, "", " ");

	for (int i = 0; i < boardSize; i++) {
		delete[] board[i];
	}
	delete[] board;

	return 0;
}
