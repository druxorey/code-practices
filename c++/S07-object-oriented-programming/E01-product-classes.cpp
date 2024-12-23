#include <iostream>

class products {
	protected:
		float iva;
		float discount;
	public:
		int code;
		std::string name;
		float price = 0;

		products(float iva, float discount) : iva(iva), discount(discount) {}
};

class book: public products {
	public:
		std::string author;
		std::string title;
		std::string editorial;
		int year;
		int isbn;

		book() : products(10, 20) {}

		float getPrice() {
			return price + ( price * iva /100) - (price * discount / 100);
		}
};

class cd: public products {
	public:
		std::string interpret;
		std::string title;
		int year;
};

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PRODUCT CLASSES =========]\e[0m\n\n";

	book b;
	b.code = 1;
	b.price = 20;
	std::cout << b.code << ";" << b.getPrice() << '\n';
	return 0;
}
