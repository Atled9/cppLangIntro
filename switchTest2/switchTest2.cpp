#include <iostream>

int main() {
	//Can 2 cases in a switch statement use the same block of code?
	
	int num;
	std::cout << "Please enter a number (1-4): ";
	std::cin >> num;

	switch(num) {
		case 1: case 3:
			std::cout << "1 or 3 has been chosen\n";
			break;
		case 2:
			std::cout << "2 has been chosen\n";
			break;
		case 4:
			std::cout << "4 has been chosen\n";
			break;
		default:
			std::cout << "An invalid value has been chosen\n";
	}
	//yes
	return 0;
}
