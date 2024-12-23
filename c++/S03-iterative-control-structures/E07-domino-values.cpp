#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= DOMINO VALUES =========]\e[0m\n\n";

	for (int i = 0; i <= 6; i++) {
		for (int j = 0; j <= i; j++) {
			std::cout << i << ":" << j << '\n';
		}
	}
	return 0;
}
