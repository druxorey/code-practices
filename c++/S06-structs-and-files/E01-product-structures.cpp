#include <iostream>
#include "../U1-libraries/dxinput.hpp"

const int MAX_PRODUCTS = 3;
const int MAX_CATEGORIES = 2;

struct product {
	unsigned int code = 0;
	std::string name = "No name";
	std::string description = "No description";
	double price = 0.0;
};

struct category {
	std::string name = "No name";
	unsigned int code = 0;
	unsigned int quantity = 0;
	product products[MAX_PRODUCTS];
};


int terminalSize() {
    FILE* pipe = popen("tput cols", "r");
    if (!pipe) {
        std::cerr << "Failed to run command" << std::endl;
        return 1;
    }
    char buffer[128];
    std::string result = "";
    while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
        result += buffer;
    }
    pclose(pipe);
    return std::stoi(result);
}


void title(std::string title) {
	system("clear");
	int spaces = ((terminalSize() - title.size()) / 2) - 3;
    printf("\n   \e[1;38m\e[45m[");
	for (int i = 0; i < spaces; i++) std::cout << "=";
	std::cout << title;
	for (int i = 0; i < spaces - 2; i++) std::cout << "=";
	printf("]\e[0m   \n\n");
}


void option(std::string option, int number) {
	printf("	[%d] %s\n", number, option.c_str());
}


template <typename datatype>
datatype input() {
	datatype value;
	getcin("\n	Select an option [n]: ", value);
	return value;
}


int categorySelection(category categories[]) {
	int category;
	title(" SELECT A CATEGORY ");

	for (int i = 0; i < MAX_CATEGORIES; i++) {
		option(categories[i].name, i + 1);
	}

	do {
		category = input<int>();
		if (category <= 0 || category > MAX_CATEGORIES) {
			std::cout << "Invalid category" << '\n';
		}
	} while (category <= 0 || category > MAX_CATEGORIES);

	return category - 1;
}


product requestProduct(category categories[], int selectedCategory) {
	int newProductIndex = categories[selectedCategory].quantity++;

	std::cout << '\n' << "Enter the product code: ";
	std::cin >> categories[selectedCategory].products[newProductIndex].code;
	std::cin.ignore();
	std::cout << "Enter the product name: ";
	getline(std::cin, categories[selectedCategory].products[newProductIndex].name);
	std::cout << "Enter the product description: ";
	getline(std::cin, categories[selectedCategory].products[newProductIndex].description);
	std::cout << "Enter the product price: ";
	std::cin >> categories[selectedCategory].products[newProductIndex].price;

	return categories[selectedCategory].products[newProductIndex];
}


void addProduct(category categories[]) {
	int selectedCategory = categorySelection(categories);
	if (categories[selectedCategory].quantity >= MAX_PRODUCTS) {
		std::cout << "The category is full" << '\n';
		return;
	}
	requestProduct(categories, selectedCategory);
}


void printProducts(category categories[]) {
	int selectedCategory = categorySelection(categories);

	std::cout << '\n' << " - Category: " << categories[selectedCategory].name << '\n';
	std::cout << " - Quantity: " << categories[selectedCategory].quantity << '\n' << '\n';

	for (int j = 0; j < MAX_PRODUCTS; j++) {
		std::cout << "	- Product: " << categories[selectedCategory].products[j].name << '\n';
		std::cout << "	- Description: " << categories[selectedCategory].products[j].description << '\n';
		std::cout << "	- Price: " << categories[selectedCategory].products[j].price << '\n' << '\n';
	}
}


void addPrice(category categories[]) {
	int selectedCode, addPercentage;
	std::cout << "Enter the product code: ";
	std::cin >> selectedCode;
	std::cout << "Enter the percentage to add: ";
	std::cin >> addPercentage;

	for (int i = 0; i < MAX_CATEGORIES; i++) {
		for (int j = 0; j < MAX_PRODUCTS; j++) {
			if (categories[i].products[j].code == selectedCode) {
				categories[i].products[j].price += categories[i].products[j].price * addPercentage / 100;
			}
		}
	}
}


void searchProducts(category categories[]) {
	int searchCode;
	std::cout << "Enter the product code: ";
	std::cin >> searchCode;

	for (int i = 0; i < MAX_CATEGORIES; i++) {
		for (int j = 0; j < MAX_PRODUCTS; j++) {
			if (categories[i].products[j].code == searchCode) {
				std::cout << "The product is in the system " << '\n';
				return;
			}
		}
	}
	std::cout << "Product not found" << '\n';
}


int main(int argc, char *argv[]) {
	category categories[MAX_CATEGORIES];
	categories[0].name = "Electronics";
	categories[1].name = "Clothes";


	do {
		title(" PRODUCT STRUCTURES ");

		option("Add product", 1);
		option("List products", 2);
		option("Add Price", 3);
		option("Search products", 4);
		option("Exit", 5);

		int option = input<int>();

		switch (option) {
			case 1: addProduct(categories); break;
			case 2: printProducts(categories); break;
			case 3: addPrice(categories); break;
			case 4: searchProducts(categories); break;
			case 5: std::cout << "Goodbye" << '\n'; return 0;
			default: std::cout << "Invalid option" << '\n'; break;
		}

		std::cout << "Press enter to continue...";
		std::cin.get();
		std::cin.ignore();
	} while (true);

	return 0;
}
