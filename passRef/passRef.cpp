#include <iostream>

void swap(std::string &x, std::string &y);
void showAddress(std::string &x, std::string &y);

int main() {
	
	std::string x = "Dr_Pepper";
	std::string y = "Water";

	//When you pass a variable into a function
	//you typically pass by value (You pass a
	//copy into the function)
	
	//Use the address-of operator to pass by
	//reference. Put the address-of operator
	//behind the variables in the parameters
	//of the function declaration
	//swap(x, y);
	
	showAddress(x, y);

	std::cout << "X: " << &x << '\n';
	std::cout << "Y: " << &y << '\n';
	return 0;
}

void swap(std::string &x, std::string &y) {
	std::string temp;

	//swapping variables by variable assignment
	temp = x;
	x = y;
	y = temp;
}

void showAddress(std::string &x, std::string &y) {
	std::cout << "X: " << &x << '\n';
	std::cout << "Y: " << &y << '\n';
}
