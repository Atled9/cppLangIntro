#include <iostream>
/*
class Animal {
	public:
		bool alive = true;

	void eat() {
		std::cout << "This animal is eating\n";
	}
};
class Dog : public Animal {
	public:
		void bark() {
			std::cout << "The dog goes woof!\n";
		}
};
class Cat : public Animal {
	public:
		void meow() {
			std::cout << "The cat goes meow!\n";
		}
};
*/
class Shape {
	public:
		double area; //surface area
		double volume;
};
class Cube : public Shape {
	public:
		double side;
	Cube(double side) {
		this->side = side;
		this->area = 6 * side * side;
		this->volume = side * side * side;
	}
};
class Sphere : public Shape {
	public:
		double radius;
	Sphere(double radius) {
		this->radius = radius;
		this->area = 4 * 3.14159 * radius * radius;
		this->volume = (4/3.0) * 3.14159 * radius * radius * radius;
	}
};
int main() {
	/*
	//a class can inherit the attributes and methods from another class.
	//Children classes inherit from a parent class.
	//Helps to reuse similar code found within multiple classes
	
	Dog dog;
	Cat cat;

	std::cout << dog.alive << '\n';
	dog.eat();
	dog.bark();
	
	std::cout << cat.alive << '\n';
	cat.eat();
	//cat.bark(); the cat class does not have access to this method
	cat.meow();
	*/
	Cube cube(10);
	Sphere sphere(5);

	std::cout << "Area: " << cube.area << "cm^2\n";
	std::cout << "Volume: " << cube.volume << "cm^3\n";

	std::cout << "Area: " << sphere.area << "cm^2\n";
	std::cout << "Volume: " << sphere.volume << "cm^3\n";

	return 0;
}
