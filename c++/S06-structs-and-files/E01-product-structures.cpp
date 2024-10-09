#include <iostream>

const int MAX_PRODUCTS = 3;
const int MAX_CATEGORIES = 2;

struct product {
	int code = 0;
	std::string name = "No name";
	std::string description = "No description";
	float price = 0;
};

struct category {
	std::string name = "No name";
	int code = 0;
	int quantity = 0;
	product products[MAX_PRODUCTS];
};


int categorySelection(category categories[]) {
	int category;
	system("clear");

	for (int i = 0; i < MAX_CATEGORIES; i++) {
		std::cout << i + 1 << ". " << categories[i].name << '\n';
	}

	do {
		std::cout << "Select a category: ";
		std::cin >> category;
		if (category <= 0 || category > MAX_CATEGORIES) {
			std::cout << "Invalid category" << '\n';
		}
	} while (category <= 0 || category > MAX_CATEGORIES);

	return category - 1;
}


product requestProduct(category categories[], int selectedCategory) {
	int newProductIndex = categories[selectedCategory].quantity ++;

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


int main() {
	category categories[MAX_CATEGORIES];
	categories[0].name = "Electronics";
	categories[1].name = "Clothes";

	do {
		system("clear");

		std::cout << "\n\e[0;35m[========= PRODUCT STRUCTURES =========]\e[0m\n" << '\n';

		std::cout << "1. Add product" << '\n';
		std::cout << "2. List products" << '\n';
		std::cout << "3. Add Price" << '\n';
		std::cout << "4. Search products" << '\n';
		std::cout << "5. Exit" << '\n';

		int option;
		std::cout << "Select an option: ";
		std::cin >> option;

		switch (option) {
			case 1:
				addProduct(categories);
				break;
			case 2:
				printProducts(categories);
				break;
			case 3:
				addPrice(categories);
				break;
			case 4:
				searchProducts(categories);
				break;
			case 5:
				std::cout << "Goodbye" << '\n';
				return 0;
			default:
				std::cout << "Invalid option" << '\n';
				break;
		}

		std::cout << "Press enter to continue...";
		std::cin.get();
		std::cin.ignore();
	} while (true);

	return 0;
}
