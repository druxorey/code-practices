#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= FROG JUMPS =========]\e[0m\n\n";

	int joseDistance, pedroDistance, joseJumps;

	std::cout << "Enter the distance Jose can jump: ";
	std::cin >> joseDistance;
	std::cout << "Enter the times Jose will jump: ";
	std::cin >> joseJumps;
	std::cout << "Enter the distance Pedro can jump: ";
	std::cin >> pedroDistance;
	std::cout << '\n';

	if ( (joseDistance * pedroDistance) <= (joseDistance * joseJumps) ){
		std::cout << "The frogs will meet at the same point before Jose finishes all his jumps." << '\n';
	} else{
		std::cout << "The frogs will not meet at some point before Jose finishes all his jumps." << '\n';
	}

	return 0;
}
