#include <iostream>

using namespace std;

int main() {
    double inputNumber, piValue = 4;

    cout << "\n\e[0;35m[========= PI APPROXIMATION =========]\e[0m\n" << endl;

    cout << "Enter the number of iterations: ";
    cin >> inputNumber;

    for (double i = 3; i <= (inputNumber * 4) ; i += 4) {
        piValue = piValue - (4/i) + (4/(i+2));
    }

    cout << "The value of pi is: " << piValue << endl;

    return 0;
}
