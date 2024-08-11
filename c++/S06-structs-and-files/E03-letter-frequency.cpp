#include <iostream>
#include <fstream>

using namespace std;

int main() {

    char letters[] = {'e', 'a', 'o', 'i', 'u'};
    char mayus[] = {'E', 'A', 'O', 'I', 'U'};
    int frequency[] = {0, 0, 0, 0, 0};
    char actualLetter;

    cout << "Enter the path of the file: ";
    string path;
    cin >> path;

    ifstream file(path);

    while (file.get(actualLetter)) {
        for (int i = 0 ; i < 5; i++) {
            if (actualLetter == letters[i] or actualLetter == mayus[i]) {
                frequency[i]++;
            }
        }
    }

    file.close();

    for (int i = 0 ; i < 5; i++) {
        cout << letters[i] << "-" << frequency[i] << endl;
    }

    return 0;
}
