#include <iostream>
#include <cmath>

using namespace std;

struct dot {
    float x = 0;
    float y = 0;
    float z = 0;
};


int main() {
    dot dots[2];

	cout << "\n\e[0;35m[========= POINT DISTANCE =========]\e[0m\n" << endl;

    for (int i = 0; i < 2; i++) {
        int coorditate;
        cout << "Enter coorditates for the dot number " << i+1 << ": " << endl;
        cin >> coorditate;
        dots[i].x = coorditate;
        cin >> coorditate;
        dots[i].y = coorditate;
        cin >> coorditate;
        dots[i].z = coorditate;
    }

    float firstCalc, secondCalc, thirdCalc;

    firstCalc =  pow((dots[0].x - dots[1].x),2);
    secondCalc =  pow((dots[0].y - dots[1].y),2);
    thirdCalc =  pow((dots[0].z - dots[1].z),2);

    cout << "The distance between the points is: " << sqrt(firstCalc + secondCalc + thirdCalc) << endl;

    return 0;
}
