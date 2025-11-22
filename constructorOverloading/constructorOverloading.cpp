#include <iostream>

class Pizza {
	public:
		std::string topping1;
		std::string topping2;

	Pizza() {
	}
	Pizza(std::string topping1) {
		this->topping1 = topping1;
	}
	Pizza(std::string topping1, std::string topping2) {
		this->topping1 = topping1;
		this->topping2 = topping2;
	}
};

int main() {
	//overloaded constructors are constructors
	//with the same name but different parameters.
	//Allows for varying arguments when instantiating
	//an object
	Pizza pizza1("pepperoni");
	Pizza pizza2("mushrooms", "peppers");

	//Pizza pizza3(); if you create an instance of a class
	//(instantiate an object) with no arguments, you do not 
	//need a set of parenthesis
	Pizza pizza3; //You still need a matching constructor
		      //with no parameters when creating an object
		      //with no arguments

	std::cout << pizza2.topping1 << '\n';
	std::cout << pizza2.topping2 << '\n';
	return 0;
}
