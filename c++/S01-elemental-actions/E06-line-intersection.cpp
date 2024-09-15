#include <iostream>

using namespace std;

int main() {
    float m1, b1, m2, b2, xIntersection, yIntersection;

    cout << "\n\e[0;35m[========= LINE INTERSECTION =========]\e[0m\n" << endl;

    cout << "Enter values for the first line (m1x+b1): ";
    cin >> m1 >> b1;
    cout << "Enter values for the second line (m2x+b2): ";
    cin >> m2 >> b2;

    xIntersection = (b2 - b1) / (m1 - m2);
    yIntersection = m1 * xIntersection + b1;

    cout << "The intersection is: (" << xIntersection << "," << yIntersection << ")" << endl;

    return 0;
}
