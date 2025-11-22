#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main () {
    /*typedef is used to create an additional name
    (alias) for another data type */

    //pairlist_t pairlist;
    text_t firstName = "Sam";
    number_t age = 27;

    /*the "using" keyword has largely replaced "typedef"
    because "using" is more suitable for templates*/

    std::cout << "Hello " << firstName << "!\n";
    std::cout << "You are " << age << " years old.\n";

    return 0;
}
