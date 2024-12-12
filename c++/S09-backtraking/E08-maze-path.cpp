#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxmatrix.cpp"

void generateMaze(int** maze, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((rand() % 100) <= 25 ) maze[i][j] = 1;
            else maze[i][j] = 0;
        }
    }

    maze[0][0] = 0;
    maze[size-1][size-1] = 0;
}


bool isValid(int** maze, int size, int i, int j) {
	if (i < 0 || j < 0 || i >= size || j >= size) return false;
	if (maze[i][j]) return false;
	return true;
}


bool mazePath(int** maze, int size, int i = 0, int j = 0) {
	if (i == size-1 && j == size-1) {
		maze[i][j] = 2;
		printf("THERE IS A PATH\n");
		printMatrix(maze, size);
		return true; 
	}

	if (isValid(maze, size, i, j)) {
		printf("\e[0;32m(%d, %d)\e[0m\n", i, j);
		maze[i][j] = 2;
		if (mazePath(maze, size, i+1, j)) return true;
		if (mazePath(maze, size, i, j+1)) return true;
		if (mazePath(maze, size, i-1, j)) return true;
		if (mazePath(maze, size, i, j-1)) return true;
		maze[i][j] = 0;
	}
	printf("\e[0;31m(%d, %d)\e[0m\n", i, j);

	return false;
}


int main() {

	std::cout << "\n\e[0;35m[========= MAZE PATH =========]\e[0m\n" << '\n';

	int size;
	srand(time(NULL));
	getInput("Enter the maze size: ", size);

	int** maze = new int*[size];
	for (int i = 0; i < size; i++) {
		maze[i] = new int[size];
	}

	generateMaze(maze, size);

	printf("INITIAL MAZE\n");
	printMatrix(maze, size);

	if (!mazePath(maze, size)) {
		printf("THERE IS NO PATH\n");
	}

	for (int i = 0; i < size; i++) {
		delete[] maze[i];
	}
	delete[] maze;


	return 0;
}
