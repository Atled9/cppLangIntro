#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main() {
    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age; //there will be a newline character (\n) inserted in the buffer

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name); /*we can use the getline() function when we expect spaces in our input
                                                std::ws excludes whitespaces (spaces and newline characters)*/

    std::cout << "\nHello " << name << '!' << '\n';
    std::cout << "You are " << age << " years old\n";
    return 0;
}
