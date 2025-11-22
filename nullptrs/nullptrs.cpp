#include <iostream>

int main() {
	//A null value is a special value that means something has no value.
	//When a pointer is holding a null value, that pointer is not pointing
	//to anything (null pointer) 

	//nullptr is a keyword that represents a null pointer literal

	//nullptrs are helpful when determining if an address was
	//successfully assigned to a pointer
	
	int *pointer = nullptr;
	int x = 123;

	//pointer = &x;

	//dereferencing empty pointers or nullpointers can lead to undefined behaviors
	//programmers will check to see if their pointer is a nullptr before continuing
	
	if (pointer == nullptr) {
		std::cout << "address was not assigned\n";
		//std::cout << *pointer << '\n'; // do not do this
	}
	else {
		std::cout << "address was assigned\n";
		std::cout << *pointer << '\n';
	}
	return 0;
}
