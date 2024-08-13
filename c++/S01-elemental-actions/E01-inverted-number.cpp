#include <iostream>

using namespace std;

int main(){
    int originalNumber, invertedNumber = 0;

    cout << "\n\e[0;35m[========= INVERTED NUMBER =========]\e[0m\n" << endl;

    cout << "Enter a 4 digit number: "; 
    cin >> originalNumber;

    int first,second,third,fourth;

    first = originalNumber / 1000;
    second = (originalNumber % 1000) / 100;
    third = (originalNumber % 100) / 10;
    fourth = originalNumber % 10;

    invertedNumber = (fourth * 1000) + (third * 100) + (second * 10) + first;

    cout << "The result of inverting the number is: " << invertedNumber << endl;

    return 0;
}

