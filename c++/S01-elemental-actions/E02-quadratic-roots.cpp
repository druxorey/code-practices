#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float quadratic, lineal, independent;

    cout << "\n\e[0;35m[========= QUADRATIC ROOTS =========]\e[0m\n" << endl;

    cout << "Enter the quadratic coefficient: ";
    cin >> quadratic;
    cout << "Enter the lineal coefficient: ";
    cin >> lineal;
    cout << "Enter the independent term: ";
    cin >> independent;

    float discriminant = lineal * lineal - 4 * quadratic * independent;

    float firstRoot = (-1 * lineal + sqrt(discriminant)) / (2 * quadratic);
    float secondRoot = (-1 * lineal - sqrt(discriminant)) / (2 * quadratic);

    cout << "\nThe first root is: " << firstRoot << endl;
    cout << "The second root is: " << secondRoot << endl;

    return 0;
}
