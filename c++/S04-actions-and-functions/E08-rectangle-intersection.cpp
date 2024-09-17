#include <iostream>

using namespace std;

bool isPointInRectangle(int pointX, int pointY, int rectX, int rectY, int rectWidth, int rectHeight) {
    bool isWithinWidth = pointX >= rectX && pointX <= (rectX + rectWidth);
    bool isWithinHeight = pointY <= rectY && pointY >= (rectY - rectHeight);
    return isWithinWidth && isWithinHeight;
}


int main(){
    int firstRectX, firstRectY, firstRectWidth, firstRectHeight;
    int secondRectX, secondRectY, secondRectWidth, secondRectHeight;

    cout << "\n\e[0;35m[========= RECTANGLE INTERSECTION =========]\e[0m\n" << endl;

    cout << "Enter the x and y vertex position of the first rectangle: ";
    cin >> firstRectX >> firstRectY;
    cout << "Enter the width and height of the first rectangle: ";
    cin >> firstRectWidth >> firstRectHeight;

    cout << "Enter the x and y vertex position of the second rectangle: ";
    cin >> secondRectX >> secondRectY;
    cout << "Enter the width and height of the second rectangle: ";
    cin >> secondRectWidth >> secondRectHeight;

    bool isTopLeftInSecond = isPointInRectangle(firstRectX, firstRectY, secondRectX, secondRectY, secondRectWidth, secondRectHeight);
    bool isTopRightInSecond = isPointInRectangle(firstRectX + firstRectWidth, firstRectY, secondRectX, secondRectY, secondRectWidth, secondRectHeight);
    bool isBottomLeftInSecond = isPointInRectangle(firstRectX, firstRectY - firstRectHeight, secondRectX, secondRectY, secondRectWidth, secondRectHeight);
    bool isBottomRightInSecond = isPointInRectangle(firstRectX + firstRectWidth, firstRectY - firstRectHeight, secondRectX, secondRectY, secondRectWidth, secondRectHeight);

    if (isTopLeftInSecond || isTopRightInSecond || isBottomLeftInSecond || isBottomRightInSecond) {
        cout << "A vertex of the first rectangle is in the second rectangle.\n";
    } else {
        cout << "No vertex of the first rectangle is in the second rectangle.\n";
    }

    return 0;
}
