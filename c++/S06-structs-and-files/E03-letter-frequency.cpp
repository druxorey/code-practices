#include <iostream>
#include <fstream>

int main() {
	char letters[] = {'e', 'a', 'o', 'i', 'u'};
	char mayus[] = {'E', 'A', 'O', 'I', 'U'};
	int frequency[] = {0, 0, 0, 0, 0};
	char actualLetter;

	std::cout << "\n\e[0;35m[========= LETTER FREQUENCY =========]\e[0m\n" << '\n';

	std::cout << "Enter the path of the file: ";
	std::string path;
	std::cin >> path;

	std::ifstream file(path);

	while (file.get(actualLetter)) {
		for (int i = 0 ; i < 5; i++) {
			if (actualLetter == letters[i] or actualLetter == mayus[i]) {
				frequency[i]++;
			}
		}
	}

	file.close();

	for (int i = 0 ; i < 5; i++) {
		std::cout << letters[i] << "-" << frequency[i] << '\n';
	}

	return 0;
}
