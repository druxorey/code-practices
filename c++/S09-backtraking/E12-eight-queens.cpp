#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxmatrix.cpp"

bool isValid(bool** matrix, int size, int row, int col) {
    for (int i = 0; i < row; i++)
        if (matrix[i][col])
            return false;

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (matrix[i][j])
            return false;

    for (int i = row, j = col; i >= 0 && j < size; i--, j++)
        if (matrix[i][j])
            return false;

    return true;
}


bool nQueens(bool** matrix, int size, int row = 0, int queens = 0) {
	if (queens == size) return true;
	for (int i = 0; i < size; i++) {
		if(isValid(matrix, size, row, i)) {
			matrix[row][i] = true;
			queens++;
			if (nQueens(matrix, size, row + 1, queens)) return true;
			matrix[row][i] = false;
			queens--;
		}
	}
	return false;
}


int main() {

    std::cout << "\n\e[0;35m[========= EIGHT QUEENS =========]\e[0m\n" << '\n';

	int boardSize;
	getInput("Enter board size: ", boardSize);

	bool** board = new bool*[boardSize];
	for (int i = 0; i < boardSize; i++) {
		board[i] = new bool[boardSize];
		for (int j = 0; j < boardSize; j++) {
			board[i][j] = false;
		}
	}

	nQueens(board, boardSize);
	printMatrix(board, boardSize);

	for (int i = 0; i < boardSize; i++) {
		delete[] board[i];
	}
	delete[] board;

	return 0;
}
