#include <iostream>
#include <string>

using namespace std;

const int MAX_PRODUCTS = 10;

struct date {
    int day;
    int month;
    int year;
};

struct products {
    int code;
    int quantity;
    float price;
    bool category;
    date endDate;
};


int requestValue(string valueName, int valueMin, int valueMax) {
    int productValue;
    do {
        cout << "Ingrese el " << valueName << " del producto: ";
        cin >> productValue;
        if (productValue < valueMin) { cout << "El " << valueName << " debe ser mayor a " << valueMin << endl; }
        if (productValue > valueMax) { cout << "El " << valueName << " debe ser menor a " << valueMax << endl; }
    } while (productValue < valueMin or productValue > valueMax);
    return productValue;
}


bool requestProductCategory() {
    char productCategory;
    cout << "El producto es esencial? [S/N]: ";
    cin >> productCategory;
    return productCategory == 'S' || productCategory == 's';
}


products requestProduct() {
    products product;

    product.code = requestValue("código", 0, 9999);
    product.quantity = requestValue("cantidad", 0, 50);
    product.price = requestValue("precio", 0, 9999);
    product.category = requestProductCategory();
    product.endDate.day = requestValue("dia de vencimiento", 1, 31);
    product.endDate.month = requestValue("mes de vencimiento", 1, 12);
    product.endDate.year = requestValue("año de vencimiento", 1900, 9999);

    cout << "code: " << product.code << endl;
    cout << "price: " << product.price << endl;
    cout << "category: " << product.category << endl;
    cout << "productDate de vencimiento: " << product.endDate.day << "/" << product.endDate.month << "/" << product.endDate.year << endl;
    cout << "quantity: " << product.quantity << endl;
    return product;
}


int addProduct(products productList[], int actualProductQuantity, int MAX_PRODUCTS) {
    if(actualProductQuantity + 1 <= MAX_PRODUCTS) {
        productList[actualProductQuantity] = requestProduct();
        actualProductQuantity++;
    } else {
        cout << "No hay espacio suficiente" << endl;
    }
    return actualProductQuantity;
}

void printProductList(products productList[], int actualProductQuantity) {
    cout << "Lista de productos:" << endl;
    for (int i = 0; i < actualProductQuantity; i++) {
        cout << "Producto " << i + 1 << ":" << endl;
        cout << "  Codigo: " << productList[i].code << endl;
        cout << "  Cantidad: " << productList[i].quantity << endl;
        cout << "  Precio: " << productList[i].price << endl;
        cout << "  Categoria: " << productList[i].category << endl;
        cout << "  Fecha de vencimiento: " << productList[i].endDate.day << "/" << productList[i].endDate.month << "/" << productList[i].endDate.year << endl;
    }
}


bool menu(products productList[], int &actualProductQuantity, int MAX_PRODUCTS) {
    char option;
    const char exit = '3';

    do {
        cout << "\nInventario:" << endl;
        cout << " 1 - Agregar productos" << endl;
        cout << " 2 - Mostrar productos" << endl;
        cout << " 3 - Salir" << endl;
        cout << "Seleccione una opcion: ";

        cin >> option;

        switch (option) {
            case '1':
                actualProductQuantity = addProduct(productList, actualProductQuantity, MAX_PRODUCTS);
                break;
            case '2':
                printProductList(productList, actualProductQuantity);
                break;
            case exit:
                return true;
            default:
                cout << "Opcion no valida" << endl;
        }

    } while (option != exit);

    return false;
}


int main() {
    // product p1 = {2, 2, 2.0, false, {2, 2, 2022}};
    // product p = requestProduct();

    products productList[MAX_PRODUCTS];
    int actualProductQuantity = 0;
    menu(productList, actualProductQuantity, MAX_PRODUCTS);

    return 0;
}
