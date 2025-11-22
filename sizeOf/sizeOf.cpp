#include <iostream>

int main() {
	/*sizeof(); returns the size in bytes of a
	 * variable, data type, class, objects, etc.*/
	double gpa = 3.5;
	std::string name = "Atled is a BEAST\n";
	char grade = 'A';
	bool student = true;
	char grades[] = {'A', 'B', 'C', 'D', 'F', 'Z'};
	std::string students[] = {"Spongebob", "Patrick", "Sandy", "Squidward"};

	std::cout << sizeof(students)/sizeof(std::string) << " elements in array\n";

	return 0;
}

