#include <iostream>
#include <fstream>
#include "../U1-libraries/dxinput.hpp"
#include "../U1-libraries/dxarray.hpp"

const int MAX_LETTERS = 26;
const char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
						  'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
						  'u', 'v', 'w', 'x', 'y', 'z'};

void getFrequency(std::ifstream &file, int frequency[], int &other) {
	char actualLetter;

	initArray(frequency, MAX_LETTERS, 0);

	while (file.get(actualLetter)) {
		if (actualLetter >= 'a' && actualLetter <= 'z') {
			frequency[actualLetter - 'a']++;
		} else if (actualLetter >= 'A' && actualLetter <= 'Z') {
			frequency[actualLetter - 'A']++;
		} else {
			if (actualLetter != ' ' && actualLetter != '\n') other++;
		}
	}
	other--; // This is because the last character is not a letter
}


void printFrequency(int frequency[], int others) {
    printf("\e[0;34m[INFO]\e[0m Letter frequencies:\n\n");
    for (int i = 0 ; i < MAX_LETTERS; i++) {
        printf("    \e[0;33m[\e[0m %c \e[0;33m]\e[0m - %d\n", letters[i], frequency[i]);
    }
    printf("\n\e[0;33m[INFO]\e[0m Other characters - %d\n", others);
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= LETTER FREQUENCY =========]\e[0m\n\n";

	isArgumentValid(argc, argv, 1);

	std::ifstream file(argv[1]);

	int frequency[MAX_LETTERS];
	int others = 0;
	getFrequency(file, frequency, others);
	printFrequency(frequency, others);

	file.close();

	return 0;
}
