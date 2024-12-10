#include <iostream>
#include "../U1-libraries/dxarray.cpp"

bool isValidMove(bool riverSide[3]) {
	if (riverSide[0] && riverSide[1]) return false;
	if (riverSide[1] && riverSide[2]) return false;
	return true;
}


bool isGoal(bool riverSide[3]) {
	for (int i = 0; i < 3; i++)	{ if (!riverSide[i]) return false; }
	return true;
}


void printSide(bool riverSide[3]) {
	char letters[] = { 'W', 'S','C' };
	for (int i = 0; i < 3; i++) {
		if (riverSide[i]) std::cout << letters[i] << " ";
	}
}


void print(bool leftRiver[3], bool rightRiver[3], bool isFarmerLeft) {
	int leftCount = 0, rightCount = 0;
	for (int i = 0; i < 3; i++) {
		if (leftRiver[i]) leftCount += 2;
		if (rightRiver[i]) rightCount += 2;
	}

	if (isFarmerLeft) printf("(F) ");
	else printf("    ");

	printSide(leftRiver);
	for (int i = 0; i < 6 - leftCount; i++) printf(" ");
	printf(" -----   ");
	printSide(rightRiver);

	if (!isFarmerLeft) printf("(F)");
	printf("\n");
}


bool getCrossingPath(bool leftRiver[3], bool rightRiver[3], bool isFarmerLeft = true, int lastMove = -1) {
	print(leftRiver, rightRiver, isFarmerLeft);

	if (isGoal(rightRiver)) {
		printf("Completed\n");
		return true;
	}

	if (isFarmerLeft) {
		for (int i = 0; i < 3; i++) {
			if (leftRiver[i] && i != lastMove) {
				leftRiver[i] = false;

				if (isValidMove(leftRiver)) {
					rightRiver[i] = true;
					if(getCrossingPath(leftRiver, rightRiver, !isFarmerLeft, i)) return true;
					rightRiver[i] = false;
				}

				leftRiver[i] = true;
			}
		}
	}
	else {
		if(isValidMove(rightRiver))
			if(getCrossingPath(leftRiver, rightRiver, !isFarmerLeft, -1)) return true;

		for (int i = 0; i < 3; i++) {
			if (rightRiver[i] && i != lastMove) {
				rightRiver[i] = false;

				if (isValidMove(rightRiver)) {
					leftRiver[i] = true;
					if(getCrossingPath(leftRiver, rightRiver, !isFarmerLeft, i)) return true;
					leftRiver[i] = false;
				}

				rightRiver[i] = true;
			}
		}
	}
	return false;
}


int main() {
	bool leftRiver[] = {1,1,1};
	bool rightRiver[] = { 0,0,0 };

    std::cout << "\n\e[0;35m[========= RIVER CROSSING =========]\e[0m\n" << '\n';
	
	getCrossingPath(leftRiver, rightRiver, true);
	return 0;
}
