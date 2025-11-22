#include <iostream>

int main() {
    std::string name;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    /*
    //the length() method gives you the length of the string
    if (name.length() > 12) {
        std::cout << "Your name cannot be over 12 characters";
    }
    else if (name.empty()) { //the empty method returns true if the string is empty
        std::cout << "You did not enter your name";
    }
    else {
        std::cout << "Welcome " << name << '!' << '\n';
    }
    */
    /*name.clear();
    std::cout << "Welcome " << name << '!' << '\n';*/
    /*name.append("@gmail.com");
    std::cout << "Your username is " << name;*/
    /*std::cout << "The first letter of your name is " << name.at(0) << '\n';
    std::cout << "The second letter of your name is " << name.at(1) << '\n';*/
    //name.insert(0, "@"); //the second argument can only take strings ("string"), not characters ('c')
    /*name.insert(1, "@");
    std::cout << "Your user handle is " << name << "\n";*/

    //std::cout << "The length of your first name is: " << name.find(' ') << '\n';

    //The second argument of the erase() method is not inclusive
    std::cout << "Your name without the first 3 characters is: " << name.erase(0, 3) << '\n';

    return 0;
}
