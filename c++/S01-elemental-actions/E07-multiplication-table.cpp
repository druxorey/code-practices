#include <iostream>

using namespace std;

int main() {
    int value;
    cout << "\n\e[0;35m[========= MULTIPLICATION TABLE =========]\e[0m\n" << endl;

    cout << "Enter a number: ";
    cin >> value;

    cout << "Multiplication table of " << value << endl;
    cout << "==========================" << endl;
    cout << "1 x " << value << " = " << 1 * value << endl;
    cout << "2 x " << value << " = " << 2 * value << endl;
    cout << "3 x " << value << " = " << 3 * value << endl;
    cout << "4 x " << value << " = " << 4 * value << endl;
    cout << "5 x " << value << " = " << 5 * value << endl;
    cout << "6 x " << value << " = " << 6 * value << endl;
    cout << "7 x " << value << " = " << 7 * value << endl;
    cout << "8 x " << value << " = " << 8 * value << endl;
    cout << "9 x " << value << " = " << 9 * value << endl;

    return 0;
}
