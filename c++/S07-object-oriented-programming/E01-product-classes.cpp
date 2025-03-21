#include <iostream>
#include "../U1-libraries/dxinput.hpp"

class products {
	public:
		std::string name;
		int code;

		products(float price, std::string name, int code) {
			this->price = price;
			this->name = name;
			this->code = code;
		}

		void setIva(float iva) {
			this->iva = iva; 
		}

		float getPrice() {
			return price + ( price * iva / 100);
		}

		void setPrice(float price) {
			this->price = price;
		}

	private:
		float price;
		float iva = 0;
};


class book: public products {
	public:
		std::string author;
		std::string title;
		std::string editorial;
		int year;
		int isbn;

		book(float price, std::string name, int code): products(price, name, code) {}
};


class cd: public products {
	public:
		std::string interpret;
		std::string title;
		int year;

		cd(float price, std::string name, int code): products(price, name, code) {}
};

products* createBook() {
    std::string name;
    int code;
    float price;

    getcin("Enter the name: ", name);
    getcin("Enter the price: ", price);
    getcin("Enter the code: ", code);

    return new book(price, name, code);
}

products* createCD() {
    std::string name;
    int code;
    float price;

    getcin("Enter the name: ", name);
    getcin("Enter the price: ", price);
    getcin("Enter the code: ", code);

    return new cd(price, name, code);
}


void reviewProduct(products* product) {
    if (product == nullptr) {
        printf("No product has been created.\n");
    } else {
        printf("Name: %s\n", product->name.c_str());
        printf("Code: %d\n", product->code);
        printf("Price: %.2f\n", product->getPrice());
    }

	enter();
}


int main(int argc, char *argv[]) {
    products* product = nullptr;
    char option;

    do {
		system("clear");

		std::cout << "\n\e[0;35m[========= PRODUCT CLASSES =========]\e[0m\n\n";

        printf("Select an option:\n");
        printf("1. Create book\n");
        printf("2. Create CD\n");
        printf("3. Review product\n");
        printf("4. Exit\n");

        getcin("\nOption: ", option);

		system("clear");

        switch(option) {
            case '1':
                product = createBook();
                break;
            case '2':
                product = createCD();
                break;
            case '3':
                reviewProduct(product);
                break;
            case '4':
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid option.\n");
        }
    } while (option != '4');

    delete product;

	return 0;
}
