#include <iostream>
#include "../U1-libraries/dxinput.hpp"
#include "../U1-libraries/dxsparced.hpp"

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= SPARCED DIAGONAL =========]\e[0m\n\n";

	int rows, columns, elements;
    SparseMatrix<int> matrix(0);

	getcin("Enter the number of rows: ", rows);
	getcin("Enter the number of columns: ", columns);
	getcin("Enter the number of elements: ", elements);

	matrix.fill(rows, columns, elements);

	printf("\nThe elements of the matrix: \n");
	matrix.print(rows, columns);

	printf("\nThe elements of the diagonal of the matrix: \e[0;33m[\e[0m ");
	for (int i = 0, j = 0; i < rows; i++, j++) {
		int value = matrix.get(i, j);
		printf("%d ", value);
	}
	printf("\e[0;33m]\n\e[0m");

	return 0;
}
