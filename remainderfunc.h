#pragma once
int sumtoequal7(int aNumber) {
	int sumOfNumbers = 0;
	while (aNumber > 0) {
		sumOfNumbers += aNumber % 10;
		aNumber = aNumber / 10;
	}
	return sumOfNumbers;
}