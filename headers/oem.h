#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include "remainderfunc.h"


void oemGenerator() {

	int firstPart_OEM = rand() % 366 + 1;

	while (std::to_string(firstPart_OEM).length() < 3) {
		firstPart_OEM = rand() % 366 + 1;
	}

	const int secondPart_OEM_array[5] = { 95, 96, 97, 98, 99 };
	int secondPart_OEM = rand() % 5;

	int thirdPart_OEM = rand() % 900000 + 100000;
	while (sumtoequal7(thirdPart_OEM) % 7 != 0) {
		thirdPart_OEM = rand() % 900000 + 100000;
	}

	int fourthPart_OEM = rand() % 90000 + 10000;

	std::cout << " " << firstPart_OEM << secondPart_OEM_array[secondPart_OEM] << "-OEM-0" << thirdPart_OEM << "-" << fourthPart_OEM << std::endl;
	std::cin.get();

}