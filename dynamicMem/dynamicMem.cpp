#include <iostream>

int main() {
	//Dynamic memory is allocated by the compiled program
	//at runtime. 
	//Use the 'new' operator to allocate memory in the heap
	//rather than the stack
	//
	//This is useful when we don't know how much memory we 
	//will need. Makes our programs more flexible, especially
	//when accepting user intput
	/*	
	int* pNum = NULL;
	pNum = new int; //allocate memory in the heap for 1 integer.
			//new operator will return an address
	*pNum = 19;

	std::cout << "address: " << pNum << '\n';
	std::cout << "value: " << *pNum << '\n';

	//It is standard practice to use the delete operator after
	//using the new operator when you are no longer using that space
	
	delete pNum; */

	char* pGrades = NULL;
	int size;

	std::cout << "How many grades to enter in?: ";
	std::cin >> size;

	pGrades = new char[size]; //memory is now dynamically allocated at runtime to the heap
				  //we can now create an array with a user-defined size

	for (int i = 0; i < size; i++) {
		std::cout << "Enter grade #" << i + 1 << ": ";
		std::cin >> pGrades[i];
	}
	
	for (int i = 0; i < size; i++) {
		std::cout << pGrades[i] << ' ';
	}
	
	std::cout << '\n';
	delete[] pGrades;

	

	return 0;
}
