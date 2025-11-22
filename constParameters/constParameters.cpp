#include <iostream>

void printInfo(const std::string &name, const int &age);

int main() {
	//A const parameter is a parameter
	//that is effectively read-only. 
	//Code is more secure.
	//Conveys intent.
	//Useful for references and pointers
	
	std::string name = "Atled";
	int age = 19;

	printInfo(name, age);

	return 0;
}

void printInfo(const std::string &name, const int &age) {
	name  = " ";
	age = 0;
	std::cout << name << '\n';
	std::cout << age << '\n';
}
