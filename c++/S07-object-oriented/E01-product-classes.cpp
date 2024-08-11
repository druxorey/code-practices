#include <iostream>

using namespace std;

class products {
    protected:
        float iva;
        float discount;
    public:
        int code;
        string name;
        float price = 0;

        products(float iva, float discount) : iva(iva), discount(discount) {}
};

class book: public products {
    public:
        string author;
        string title;
        string editorial;
        int year;
        int isbn;

        book() : products(10, 20) {}

        float getPrice() {
            return price + ( price * iva /100) - (price * discount / 100);
        }
};

class cd: public products {
    public:
        string interpret;
        string title;
        int year;
};

int main() {
    book b;
    b.code = 1;
    b.price = 20;
    cout << b.code << ";" << b.getPrice() << endl;
    return 0;
}
