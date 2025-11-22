#include <iostream>

int main() {
	
	//std::string students[] = {"Spongebob", "Patrick", "Sandy", "Squidward", "Mr.Krabs"};
	char grades[] = {'A', 'B', 'C', 'D', 'F'};
	/*
	std::cout << students[0] << '\n';
	std::cout << students[1] << '\n';
	std::cout << students[2] << '\n';
	*/
	//You can efficiently print elements using a for loop
	//You can use the sizeof() function to get the size of the array for loop iteration
	for (int i = 0; i < sizeof(grades)/sizeof(char); i++) {
		std::cout << grades[i] << '\n';
	}
	return 0;
}

