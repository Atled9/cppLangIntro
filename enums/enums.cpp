#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};
//If you do not assign a value to these names,
//then an integer value is implicitly assigned to each name
//starting at 0 then counting upwards. We did the
//same thing in the enum above, but explicitly 
enum Flavor {vanilla, chocolate, strawberry, mint};

int main() {
	//Enums are a user-defined data type that consist
	//of paired name-integer constants.
	//GREAT if you have a set of potential options
	/*	
	Day today = sunday;
	
	switch(today) {
		case sunday:
			std::cout << "It is Sunday!\n";
			break;
		case monday:
			std::cout << "It is Monday!\n";
			break;
		case tuesday:
			std::cout << "It is Tuesday!\n";
			break;
		case wednesday:
			std::cout << "It is Wednesday!\n";
			break;
		case thursday:
			std::cout << "It is Thursday!\n";
			break;
		case friday:
			std::cout << "It is Friday!\n";
			break;
		case saturday:
			std::cout << "It is Saturday!\n";
			break;
	}
	*/
	Day today = muffinday;
	
	switch(today) {
		case 0:
			std::cout << "It is Sunday!\n";
			break;
		case 1:
			std::cout << "It is Monday!\n";
			break;
		case 2:
			std::cout << "It is Tuesday!\n";
			break;
		case 3:
			std::cout << "It is Wednesday!\n";
			break;
		case 4:
			std::cout << "It is Thursday!\n";
			break;
		case 5:
			std::cout << "It is Friday!\n";
			break;
		case 6:
			std::cout << "It is Saturday!\n";
			break;
	}
	return 0;
}
