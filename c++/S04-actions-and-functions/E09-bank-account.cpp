#include <iostream>
#include <iomanip>

double deposit() {
	double amount;
	std::cout << "Enter the amount you want to deposit in your account: ";
	std::cin >> amount;

	if (amount < 0) {
		std::cout << "\e[0;31mYou can't deposit a negative amount\e[0m" << '\n';
		return 0;
	}

	return amount;
}


double withdraw(double balance) {
	double amount;
	std::cout << "Enter the amount you want to withdraw to your account: ";
	std::cin >> amount;

	if (amount < 0) {
		std::cout << "\e[0;31mYou can't deposit a negative amount\e[0m" << '\n';
		return 0;
	} else if (amount > balance) {
		std::cout << "\e[0;31mYou don't have enough money in your account\e[0m" << '\n';
		return 0;
	}

	return amount;
}


void showBalance(double balance) {
	std::cout.precision(2);
	std::cout << "\e[0;32mYour actual balance is $" << std::fixed << balance << "\e[0m\n";
}


int main() {
	double balance = 0.00;
	int choise;

	do {
		system("clear");

		std::cout << "\n\e[0;35m[========= BANK ACCOUNT =========]\e[0m\n\n";
		std::cout << "1. Deposit" << '\n';
		std::cout << "2. Withdraw" << '\n';
		std::cout << "3. Check balance" << '\n';
		std::cout << "4. Exit" << '\n';
		std::cout << "\nSelect a choise: ";

		std::cin >> choise;

		switch (choise) {
			case 1: 
				balance += deposit();
				showBalance(balance);
				break;
			case 2: 
				balance -= withdraw(balance);
				showBalance(balance);
				break;
			case 3: 
				showBalance(balance);
				break;
			case 4:
				std::cout << "Thanks for using our bank account" << '\n';
				return 0;
			default:
				std::cout << "Invalid choise" << '\n';
		}

		std::cout << "\nPress enter to continue..";
		std::cin.get(); // Wait for user to press enter
		std::cin.get(); // It is necessary to use two times bc the first one doesn't  get the \n character

	} while (choise != 4);

	return 0;
}
