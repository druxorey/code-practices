#include <iostream>

int main() {
	int i = 0, j = 0;

	std::cout << "\n\e[0;35m[========= DOMINO VALUES =========]\e[0m\n" << '\n';

	for (i = 0; i <= 6; i++) {
		for (j = 0; j <= i; j++) {
			std::cout << i << ":" << j << '\n';
		}
	}
	return 0;
}
