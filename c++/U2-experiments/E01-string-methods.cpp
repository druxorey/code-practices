#include <iostream>

int main() {
	std::string name, email, username;

	std::cout << "\n\e[0;35m[========= STRING METHODS =========]\e[0m\n" << '\n';

	while (true) {
		std::cout << "Enter your full name: ";
		std::getline(std::cin, name);
		std::cout << '\n';

		if (name.empty()) {
			std::cout << "You didn't enter any name." << '\n';
			continue;
		}

		if (name.length() > 20) {
			std::cout << "Your name is too long. It will be shortened to the nearest space." << '\n';
			int position = name.find(' ');
			name.erase(position, name.length());
		}

		std::cout << '\n';
		break;
	}

	username = name;

	for (int i = 0; i < username.length(); i++) {
		if (username.at(i) == ' ') {
			username[i] = '_';
		} else if ((int) username.at(i) < 91 && (int) username.at(i) > 64) {
			username[i] = (int) username.at(i) + 32;
		}
	}

	email = username;

	email.append("@gmail.com");
	username.insert(0, "@");

	std::cout << "Your name is: " << name << '\n';
	std::cout << "Your email is: " << email << '\n';
	std::cout << "Your username is: " << username << '\n';

    return 0;
}
