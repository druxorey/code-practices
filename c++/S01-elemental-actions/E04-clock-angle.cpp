#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float hourHand, minuteHand;

    cout << "\n\e[0;35m[========= CLOCK ANGLE =========]\e[0m\n" << endl;

    cout << "Enter the clock hour hand: ";
    cin >> hourHand;
    cout << "Enter the clock minute hand: ";
    cin >> minuteHand;

    float hourAngle, minuteAngle, finalAngle;

    hourAngle = hourHand * 30;
    minuteAngle = minuteHand * 6;
    finalAngle = abs((hourAngle + (minuteAngle / 12)) - minuteAngle);

    cout << "The angle between both hand's is " << finalAngle << " degrees." << endl;

    return 0;
}
