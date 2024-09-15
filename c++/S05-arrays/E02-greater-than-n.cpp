#include <iostream>
#include "array-functions.cpp"

using namespace std;

void averageInArray(int array[], int size, int number, int &quantity) {
    for (int i = 0; i < size; i++) {
        quantity += (array[i] >= number) ? 1 : 0;
    }
}


int main() {
    int sizeArray, averageNumber, quantityNumber = 0;

    cout << "\n\e[0;35m[========= GREATER THAN N =========]\e[0m\n" << endl;

    printf("Enter the size of the array: ");
    cin >> sizeArray;
    printf("Enter the averge number: ");
    cin >> averageNumber;

    int array[sizeArray];

    randArray(array, sizeArray);
    averageInArray(array, sizeArray, averageNumber, quantityNumber);

    printf("\nFinal quantity: %i\n", quantityNumber);

    return 0;
}
