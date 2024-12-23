#include <iostream>
#include "../U1-libraries/dxinput.cpp"

double deposit() {
	double amount;
	getInput("Enter the amount you want to deposit to your account: ", amount);

	if (amount < 0) {
		printf("\e[0;31mYou can't deposit a negative amount\e[0m\n");
		return 0;
	}

	return amount;
}


double withdraw(double balance) {
	double amount;
	getInput("Enter the amount you want to withdraw to your account: ", amount);

	if (amount < 0) {
		printf("\e[0;31mYou can't withdraw a negative amount\e[0m\n");
		return 0;
	} else if (amount > balance) {
		printf("\e[0;31mYou don't have enough money in your account\e[0m\n");
		return 0;
	}

	return amount;
}


void showBalance(double balance) {
	printf("\e[0;32mYour actual balance is $%.2f\e[0m\n", balance );
}


int main(int argc, char *argv[]) {
	double balance = 0.00;
	int choise;

	do {
		system("clear");

		std::cout << "\n\e[0;35m[========= BANK ACCOUNT =========]\e[0m\n\n";
		std::cout << "1. Deposit" << '\n';
		std::cout << "2. Withdraw" << '\n';
		std::cout << "3. Check balance" << '\n';
		std::cout << "4. Exit" << '\n';

		getInput("\nSelect a choise: ", choise);

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

		enter();

	} while (choise != 4);

	return 0;
}
