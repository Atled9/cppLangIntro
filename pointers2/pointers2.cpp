#include <iostream>

int main() {
	//We need to elaborate on the use of the asterisk (*)
	
	int x = 5;
	int* pX = &x; //the asterisk here is part of the variable-type pointer declaration.
		      //It has no dereferencing function
	
	std::cout << pX << '\n'; //prints the memory address of x
	
	std::cout << *pX << '\n'; //prints the value of x. The asterisk here functions
				  //as the dereference operator

	return 0;
}
