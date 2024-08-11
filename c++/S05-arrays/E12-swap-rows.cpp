#include <iostream>

using namespace std;


void fillMatrix(int** matrix, int sizeMatrix) {
    int nose = 1;
    for (int i = 0; i < sizeMatrix; i++) {
        for (int j = 0; j < sizeMatrix; j++) {
            matrix[i][j] = nose + j;
            if (nose + j < 10) {cout << " ";}
            cout << nose + j << "|";
        }
        nose += sizeMatrix;
        cout << endl;
    }
}

void changeRows(int** matrix, int size) {
    int temporal = 0;
    for (int i = 0; i < size; i+=2) {
        for (int j = 0; j < size; j++) {
            temporal = matrix[i][j];
            matrix[i][j] = matrix[i+1][j];
            matrix[i+1][j] = temporal;
        }
    }
}


int main() {
    int sizeMatrix;

    printf("\n[========= CHANGE ROWS MATRIX =========]\n\n");

    do {
        printf("Enter the size of the matrix: ");
        cin >> sizeMatrix;
    } while (sizeMatrix % 2 != 0);

    int** matrix = new int*[sizeMatrix]; 
    for (int i = 0; i < sizeMatrix; i++) {
        matrix[i] = new int[sizeMatrix];
    }

    fillMatrix(matrix, sizeMatrix);
    changeRows(matrix, sizeMatrix);

    cout << endl;
    for (int i = 0; i < sizeMatrix; i++) {
        for (int j = 0; j < sizeMatrix; j++) {
            if (matrix[i][j] < 10) {cout << " ";}
            cout << matrix[i][j] << "|";
        }
        cout << endl;
    }

    for (int i = 0; i < sizeMatrix; i++) {
        delete[] matrix[i]; 
    }
    delete[] matrix; 
    return 0;
}
