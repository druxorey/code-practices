#include <iostream>

using namespace std;

int main() {
    int inputNumber, i;

    cout << "\n\e[0;35m[========= DIGITS SEQUENCE =========]\e[0m\n" << endl;

    cout << "Enter the number: ";
    cin >> inputNumber;

    for (i = 0; inputNumber > 0; i++) {
        inputNumber /= 10;
    }

    cout << "The number has " << i << " digits." << endl;

    return 0;
}
