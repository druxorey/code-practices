#include <iostream>

using namespace std;

int main() {
    int i = 0, j = 0;

    cout << "\n\e[0;35m[========= DOMINO VALUES =========]\e[0m\n" << endl;

    for (i = 0; i <= 6; i++) {
        for (j = 0; j <= i; j++) {
            cout << i << ":" << j << endl;
        }
    }
    return 0;
}
