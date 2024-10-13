#include <iostream>

int main() {

	std::cout << "\n\e[0;35m[========= STRING METHODS =========]\e[0m\n" << '\n';

	bool boolArray[] = {true, false, true, false, true};
	char charArray[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	int intArray[] = {1, 2, 3, 4, 5};
	float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	std::string stringArray[] = {"Hello", "World", "How", "Are", "You"};

	std::cout << "The size of bool is " << sizeof(bool) << " byte" << '\n';
	std::cout << "The size of char is " << sizeof(char) << " byte" << '\n';
	std::cout << "The size of int is " << sizeof(int) << " bytes" << '\n';
	std::cout << "The size of float is " << sizeof(float) << " bytes" << '\n';
	std::cout << "The size of double is " << sizeof(double) << " bytes" << '\n';
	std::cout << "The size of string is " << sizeof(std::string) << " bytes" << '\n';

	std::cout << '\n';

	std::cout << "The size of boolArray is " << sizeof(boolArray) << " bytes" << '\n';
	std::cout << "The size of charArray is " << sizeof(charArray) << " bytes" << '\n';
	std::cout << "The size of intArray is " << sizeof(intArray) << " bytes" << '\n';
	std::cout << "The size of floatArray is " << sizeof(floatArray) << " bytes" << '\n';
	std::cout << "The size of doubleArray is " << sizeof(doubleArray) << " bytes" << '\n';
	std::cout << "The size of stringArray is " << sizeof(stringArray) << " bytes" << '\n';

	std::cout << '\n';

	std::cout << "boolArray have " << sizeof(boolArray) / sizeof(bool) << " elements" << '\n';
	std::cout << "charArray have " << sizeof(charArray) / sizeof(char) << " elements" << '\n';
	std::cout << "intArray have " << sizeof(intArray) / sizeof(int) << " elements" << '\n';
	std::cout << "floatArray have " << sizeof(floatArray) / sizeof(float) << " elements" << '\n';
	std::cout << "doubleArray have " << sizeof(doubleArray) / sizeof(double) << " elements" << '\n';
	std::cout << "stringArray have " << sizeof(stringArray) / sizeof(std::string) << " elements" << '\n';

	return 0;
}
