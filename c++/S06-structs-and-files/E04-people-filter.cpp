#include <iostream>
#include <fstream>
#include <string>

struct people {
	int identificator;
	std::string name;
	int age;
	char gender;
};


int getFileSize(std::ifstream& inputFile){
	std::string structSize;
	getline(inputFile, structSize);
	return stoi(structSize);
}


void readFileData (people peopleList[], std::ifstream& inputFile, int size) {
	std::string line;
	for (int i = 0; i < size; i++) {
		getline(inputFile, line);
		peopleList[i].identificator = stoi(line);
		getline(inputFile, peopleList[i].name);
		getline(inputFile, line);
		peopleList[i].age = stoi(line);
		getline(inputFile, line);
		peopleList[i].gender = line[0];
	}
}


void writeFileData (people peopleList[], int size, std::string outputArgument) {
	std::ofstream outputFile(outputArgument, std::ios::app);

	if (outputFile.is_open()) {
		for (int i = 0; i < size; i++) {
			if (peopleList[i].age >= 18) {
			outputFile << peopleList[i].age << ";";
			outputFile << peopleList[i].identificator << "\n";
			}
		}
		outputFile.close();
	}
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PEOPLE FINDER =========]\e[0m\n\n";

	std::string inputArgument = argv[1];
	std::string outputArgument = argv[2];

	std::ifstream inputFile(inputArgument);

	int size = getFileSize(inputFile);
	people peopleList[size];

	readFileData(peopleList, inputFile, size);

	inputFile.close();

	writeFileData(peopleList, size, outputArgument);

	return 0;
}
