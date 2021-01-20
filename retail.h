#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include "remainderfunc.h"

void retailGenerator() {
	int firstPart_retail = rand() % 900 + 100;
	
	int secondPart_retail = rand() % 9000000 + 1000000;

	while (sumtoequal7(secondPart_retail) % 7 != 0) {
		secondPart_retail = rand() % 9000000 + 1000000;
	}

	std::cout << " " << firstPart_retail << "-" << secondPart_retail << std::endl;
	std::cin.get();
}