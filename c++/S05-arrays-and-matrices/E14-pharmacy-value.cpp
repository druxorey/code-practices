#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxarray.cpp"

double getProductValue (int cuantityList[], float priceList[], int index){
	return cuantityList[index] * priceList[index];
}


void showProducts (int cuantityList[], int size) {
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


void sortProducts(int cuantityList[], float priceList[], int size) {
	int tempCuantity;
	float tempPrice;

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (cuantityList[j] > cuantityList[j + 1]) {
				tempCuantity = cuantityList[j];
				cuantityList[j] = cuantityList[j + 1];
				cuantityList[j + 1] = tempCuantity;

				tempCuantity = priceList[j];
				priceList[j] = priceList[j + 1];
				priceList[j + 1] = tempCuantity;
			}
		}
	}
}


int main(int argc, char *argv[]) {

	int cuantityList[10] = {120, 134, 319, 153, 91, 68, 73, 82, 90, 115};
	float priceList[10] = {2.50, 3.00, 4.50, 5.20, 6.00, 7.75, 8.00, 9.50, 10.00, 11.30};

	int option, listSize = sizeof(cuantityList) / sizeof(cuantityList[0]);

	do {
		system("clear");

		std::cout << "\n\e[0;35m[========= PHARMACY VALUE =========]\e[0m\n\n";

		printf("Enter the option you want to check:\n");
		printf("  1) Total products\n");
		printf("  2) Total stock value\n");
		printf("  3) Total stock value by product\n");
		printf("  4) Sort by cuantity\n");
		printf("  5) Exit\n");

		getInput("\nOption: ", option);

		system("clear");
		switch (option) {
			case 1:
				showProducts(cuantityList, listSize);
				break;
			case 2:
				showTotalValue(cuantityList, priceList, listSize);
				break;
			case 3:
				getInput("Enter the product number: ", option);
				printf("\n\e[1;35mPRODUCT VALUE:\e[0m %.2f$\n", getProductValue(cuantityList, priceList, option - 1));
				break;
			case 4:
				printf("\n\e[1;35mINITIAL ARRAY\e[0m\n");
				printArray(cuantityList, listSize);

				printf("\n\e[1;35mSORTED ARRAY\e[0m\n");
				sortProducts(cuantityList, priceList, listSize);
				printArray(cuantityList, listSize);
				break;
			case 5:
				printf("Exiting...\n");
				break;
			default:
				printf("\n\e[0;31mInvalid option\n");
				break;
		}
		enter();

	} while (option != 5);

	return 0;
}
