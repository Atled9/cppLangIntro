#include <iostream>

int main() {
	//A pointer is a variable that stores the memory address of another variable
	//Sometimes it's easier to work with an address
	//
	//& address-of operator
	//* dereference operator	

	std::string name = "Atled";
	std::string *pName = &name;
	
	//This will print the memory address
	std::cout << pName << '\n';
	//To access the value stored in the memory address,
	//use the dereference operator
	std::cout << *pName << '\n';

	int age = 19;
	int *pAge = &age;

	std::cout << *pAge << '\n';

	std::string freeMuffins[5] = {"muffin1", "muffin2", "muffin3", "muffin4", "muffin5"};
	//std::string *pFreeMuffins = &freeMuffins;// this will not work because the array is
	//already an address
	std::cout << freeMuffins << '\n';
	std::string *pFreeMuffins = freeMuffins;
	std::cout << pFreeMuffins << '\n';
	//both outputs show the same memory address

	//Using a dereference operator on an array gives you the 
	//first element
	std::cout << *freeMuffins << '\n';
	std::cout << *pFreeMuffins << '\n';

	return 0;
}
