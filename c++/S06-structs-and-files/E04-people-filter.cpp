#include <iostream>
#include <fstream>
#include <string>
#include "../U1-libraries/dxinput.hpp"

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

			if (peopleList[i].age < 18) {
				printf("\e[0;31m[WARNING]\e[0m %s is under 18 years old\n", peopleList[i].name.c_str());
			}

			outputFile << peopleList[i].age << ";";
			outputFile << peopleList[i].identificator << "\n";
		}
		outputFile.close();
	}

	printf("\n\e[0;32m[INFO]\e[0m Data saved in %s\n\n", outputArgument.c_str());
}


people* getPeopleList(std::string inputArgument, int &size) {
	std::ifstream inputFile(inputArgument);
	size = getFileSize(inputFile);
	people* peopleList = new people[size];
	readFileData(peopleList, inputFile, size);
	inputFile.close();
	return peopleList;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PEOPLE FINDER =========]\e[0m\n\n";

	isArgumentValid(argc, argv, 1);

	std::string inputArgument = argv[1];
	std::string outputArgument = "E04-people-filter.out";

	int listSize;
	people* peopleList = getPeopleList(inputArgument, listSize);

	writeFileData(peopleList, listSize, outputArgument);

	return 0;
}
