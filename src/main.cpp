
#include "db.hpp"

int	main() {
	std::string input;

	while (true) {
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input == "au revoir" || input == "ciao") {
			if (input == "ciao") {
				std::cout << "Ciao !" << std::endl;
				break;
			}
			std::cout << "Au revoir !" << std::endl;
			break;
		}
		std::string res = select_response(input);
		std::cout << res << std::endl;
	}
	return 0;
}
