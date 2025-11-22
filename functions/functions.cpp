#include <iostream>

void happyBirthday(std::string name, int age);

int main() {
    //A function is a block of reusable code
    std::string yourName;
    int yourAge;

    std::cout << "What is your name?: ";
    std::cin >> yourName;

    std::cout << "What is your age?: ";
    std::cin >> yourAge;
    happyBirthday(yourName, yourAge);
    happyBirthday(yourName, yourAge);
    happyBirthday(yourName, yourAge);


    return 0;
}

//"Happy Birthday" helper function
void happyBirthday(std::string name, int age) {
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday dear " << name << '!' << '\n';
    std::cout << "Happy birthday to you!\n";
    std::cout << "You are " << age << " years old!\n\n";
    return;
}
