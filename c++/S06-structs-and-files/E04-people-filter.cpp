#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct people {
    int identificator;
    string name;
    int age;
    char gender;
};


int getFileSize(ifstream& inputFile){
    string structSize;
    getline(inputFile, structSize);
    return stoi(structSize);
}


void readFileData (people peopleList[], ifstream& inputFile, int size) {
    string line;
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


void writeFileData (people peopleList[], int size, string outputArgument) {
    ofstream outputFile(outputArgument, ios::app);

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
    string inputArgument = argv[1];
    string outputArgument = argv[2];

    ifstream inputFile(inputArgument);

    int size = getFileSize(inputFile);
    people peopleList[size];

    readFileData(peopleList, inputFile, size);

    inputFile.close();

    writeFileData(peopleList, size, outputArgument);

    return 0;
}
