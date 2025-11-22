#include <iostream>

class Stove {
	private: //access specifier
		int temperature = 0;
	public: //access specifier

		//you can invoke setters within a constructor
		Stove(int temperature) {
			setTemperature(temperature);
		}

		int getTemperature() {
			return temperature;
		}
		void setTemperature(int temperature) {
			if (temperature < 0) {
				this->temperature = 0;
			}
			else if (temperature >= 10) {
				this->temperature = 10;
			}
			else {
				this->temperature = temperature;
			}
		}
};
int main() {
	//abstraction is when you hide unnecessary data from outside a class.
	//A getter is a function that makes a private attribute READABLE.
	//A setter is a function that makes a private attribute WRITABLE
	//Stove stove;
	//stove.temperature = 1000000;
	//stove.setTemperature(1000000);
	
	Stove stove1(1000000);
	std::cout << "The temperature setting is: " << stove1.getTemperature() << '\n';

	Stove stove2(-3);
	std::cout << "The temperature setting is: " << stove2.getTemperature() << '\n';

	Stove stove3(5);
	std::cout << "The temperature setting is: " << stove3.getTemperature() << '\n';
	return 0;
}
