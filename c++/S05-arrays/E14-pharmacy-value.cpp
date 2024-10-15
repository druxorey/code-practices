#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxarray.cpp"

double getProductValue (int cuantityList[], float priceList[], int index){
	return cuantityList[index] * priceList[index];
}


void showProducts (std::string nameList[], int cuantityList[], int size) {
	int total = 0;

	for (int i = 0; i < size; i++)
		total += cuantityList[i];

	printf("\n\e[1;35mTOTAL PRODUCTS:\e[0m %d\n", total);
}


void showTotalValue (int cuantityList[], float priceList[], int size) {
	double total = 0;
	
	for (int i = 0; i < size; i++)
		total += cuantityList[i] * priceList[i];

	printf("\n\e[1;35mTOTAL STOCK VALUE:\e[0m %.2f$\n", total);
}


int main() {
	std::string nameList[10] = {"Paracetamol", "Panadol", "Vitamin C", "Vitamin D", "Vitamin E", "Vitamin B", "Vitamin A", "Vitamin K", "Vitamin B12", "Vitamin B6"};
	int cuantityList[10] = {120, 134, 319, 153, 91, 68, 73, 82, 90, 115};
	float priceList[10] = {2.50, 3.00, 4.50, 5.20, 6.00, 7.75, 8.00, 9.50, 10.00, 11.30};

	int option;

	do {
		system("clear");
		std::cout << "\n\e[0;35m[========= PHARMACY VALUE =========]\e[0m\n" << '\n';
		printf("Enter the option you want to check:\n");
		printf("  1) Total products\n");
		printf("  2) Total stock value\n");
		printf("  3) Total stock value by product\n");
		printf("  4) Exit\n");

		getInput("\nOption: ", option);

		system("clear");
		switch (option) {
			case 1:
				showProducts(nameList, cuantityList, sizeof(nameList) / sizeof(nameList[0]));
				break;
			case 2:
				showTotalValue(cuantityList, priceList, sizeof(nameList) / sizeof(nameList[0]));
				break;
			case 3:
				getInput("Enter the product number: ", option);
				printf("\n\e[1;35mPRODUCT:\e[0m %s", nameList[option - 1].c_str());
				printf("\n\e[1;35mPRODUCT VALUE:\e[0m %.2f$\n", getProductValue(cuantityList, priceList, option - 1));
				break;
			case 4:
				printf("Exiting...\n");
				break;
			default:
				printf("\n\e[0;31mInvalid option\n");
				break;
		}
		enter();

	} while (option != 4);

	return 0;
}
