#include <iostream>

using namespace std;

const int MAX_PRODUCTS = 3;
const int MAX_CATEGORIES = 2;

struct product {
    int code = 0;
    string name = "No name";
    string description = "No description";
    float price = 0;
};

struct category {
    string name = "No name";
    int code = 0;
    int quantity = 0;
    product products[MAX_PRODUCTS];
};


int categorySelection(category categories[]) {
    int category;
    system("clear");

    for (int i = 0; i < MAX_CATEGORIES; i++) {
        cout << i + 1 << ". " << categories[i].name << endl;
    }

    do {
        cout << "Select a category: ";
        cin >> category;
        if (category <= 0 || category > MAX_CATEGORIES) {
            cout << "Invalid category" << endl;
        }
    } while (category <= 0 || category > MAX_CATEGORIES);

    return category - 1;
}


product requestProduct(category categories[], int selectedCategory) {
    int newProductIndex = categories[selectedCategory].quantity ++;

    cout << endl << "Enter the product code: ";
    cin >> categories[selectedCategory].products[newProductIndex].code;
    cin.ignore();
    cout << "Enter the product name: ";
    getline(cin, categories[selectedCategory].products[newProductIndex].name);
    cout << "Enter the product description: ";
    getline(cin, categories[selectedCategory].products[newProductIndex].description);
    cout << "Enter the product price: ";
    cin >> categories[selectedCategory].products[newProductIndex].price;

    return categories[selectedCategory].products[newProductIndex];
}


void addProduct(category categories[]) {
    int selectedCategory = categorySelection(categories);
    if (categories[selectedCategory].quantity >= MAX_PRODUCTS) {
        cout << "The category is full" << endl;
        return;
    }
    requestProduct(categories, selectedCategory);
}


void printProducts(category categories[]) {
    int selectedCategory = categorySelection(categories);

    cout << endl << " - Category: " << categories[selectedCategory].name << endl;
    cout << " - Quantity: " << categories[selectedCategory].quantity << endl << endl;

    for (int j = 0; j < MAX_PRODUCTS; j++) {
        cout << "    - Product: " << categories[selectedCategory].products[j].name << endl;
        cout << "    - Description: " << categories[selectedCategory].products[j].description << endl;
        cout << "    - Price: " << categories[selectedCategory].products[j].price << endl << endl;
    }
}


void addPrice(category categories[]) {
    int selectedCode, addPercentage;
    cout << "Enter the product code: ";
    cin >> selectedCode;
    cout << "Enter the percentage to add: ";
    cin >> addPercentage;

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
    cout << "Enter the product code: ";
    cin >> searchCode;

    for (int i = 0; i < MAX_CATEGORIES; i++) {
        for (int j = 0; j < MAX_PRODUCTS; j++) {
            if (categories[i].products[j].code == searchCode) {
                cout << "The product is in the system " << endl;
                return;
            }
        }
    }
    cout << "Product not found" << endl;
}


int main() {
    category categories[MAX_CATEGORIES];
    categories[0].name = "Electronics";
    categories[1].name = "Clothes";

    do {
        system("clear");

		cout << "\n\e[0;35m[========= PRODUCT STRUCTURES =========]\e[0m\n" << endl;

        cout << "1. Add product" << endl;
        cout << "2. List products" << endl;
        cout << "3. Add Price" << endl;
        cout << "4. Search products" << endl;
        cout << "5. Exit" << endl;

        int option;
        cout << "Select an option: ";
        cin >> option;

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
                cout << "Goodbye" << endl;
                return 0;
            default:
                cout << "Invalid option" << endl;
                break;
        }

        cout << "Press enter to continue...";
        cin.get();
        cin.ignore();
    } while (true);

    return 0;
}
