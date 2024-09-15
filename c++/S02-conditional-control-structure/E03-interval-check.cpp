#include <iostream>

using namespace std;

int main() {
    float v1, v2, xValue;

    cout << "\n\e[0;35m[========= INTERVAL CHECK =========]\e[0m\n" << endl;

    cout << "Enter V1: ";
    cin >> v1;
    cout << "Enter V2: ";
    cin >> v2;
    cout << "Enter the x value: ";
    cin >> xValue;
    cout << endl;

    if (v1 <= xValue && xValue <= v2) {
        cout << "The number is inside the interval." << endl;
    } else {
        cout << "The number is outside the interval." << endl;
    }

    return 0;
}
