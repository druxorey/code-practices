#include <iostream>

using namespace std;

int main() {
    int binary, decimal;

    cout << "\n\e[0;35m[========= BINARY TO DECIMAL =========]\e[0m\n" << endl;

    cout << "Enter a 4 digit binary number: ";
    cin >> binary;

    int first,second,third,fourth;

    first = binary / 1000;
    second = (binary % 1000) / 100;
    third = (binary % 100) / 10;
    fourth = binary % 10;

    decimal = (first * 8) + (second * 4) + (third * 2) + (fourth * 1);

    cout << "The decimal value is: " << decimal << endl;

    return 0;
}
