#include <iostream>
#include "../include/db.hpp"

int	main() {
	std::string input;

	while (true) {
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input == "Au revoir" || input == "au revoir") {
			std::cout << "Au revoir !" << std::endl;
			break;
		}
		std::string res = select_response(input);
		std::cout << res << std::endl;
	}
	return 0;
}
