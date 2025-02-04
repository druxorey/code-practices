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

	int mcmDivisor = (joseDistance - pedroDistance);

	if (mcmDivisor == 0) mcmDivisor = joseDistance;
	else if (mcmDivisor < 0) mcmDivisor = 1;

	int mcm = (joseDistance * pedroDistance) / mcmDivisor;

	if ( mcm <= joseJumps * joseDistance ){
		std::cout << "The frogs will meet at the same point after \e[0;32m" << mcm / joseDistance << " jumps\e[0m." << '\n';
		std::cout << "They will meet at \e[0;32m" << mcm << " cm\e[0mfrom the start." << '\n';
	} else{
		std::cout << "The frogs will not meet at some point before Jose finishes all his jumps." << '\n';
	}

	return 0;
}
