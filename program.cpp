#include <iostream>
#include "headers/retail.h"
#include "headers/oem.h"

std::string version;

int main() {
	srand(time(0));
	std::cout << " Windows 95 Keygen\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << " Please enter version (retail/OEM): ";
	getline(std::cin, version);

	if (version == "retail") {
		retailGenerator(); 
		main();
	}

	if (version == "oem") {
		oemGenerator();
		main();
	}

	else {
		std::cout << " Enter either \"oem\" or \"retail\", depending on your copy" << std::endl;
		std::cin.get();
		main();
	}

}