#include <iostream>
#include "array-functions.cpp"

using namespace std;

int maxArray(int array[], int size) {
    int maxNumber = array[0];

    for (int i = 1; i < size; i++) {
        int element = array[i];

        if (element > maxNumber) {
            maxNumber = element;
        }
    }
    return maxNumber;
};

int main() {
    int sizeArray;
    int initialArray[sizeArray];

    cout << "\n\e[0;35m[========= MAX VALUE =========]\e[0m\n" << endl;

    printf("Enter the size of the array: ");
    cin >> sizeArray;

    randArray(initialArray, sizeArray);
    printf("The max number in the array is %i.\n", maxArray(initialArray, sizeArray));

    return 0;
}
