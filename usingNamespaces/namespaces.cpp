#include <iostream>

namespace first {
    int x = 0;
}
namespace second {
    int x = 1;
}

int main() {
    /* A namespace allows for identically
    named entities as long as the namespaces
    are different */

    //the following snippet will create an error during compilation
    //int x = 0;
    //int x = 1;

    //int x = 2;
    //using namespace second;
    //std::cout << x << '\n';

    //using namespace std; can be risky because of unseen conflicts with
    //entities inside the namespace
    //using namespace std;
    using std::cout; //this is safer
    using std::string;

    string name = "Sam";

    cout << "Hello " << name << "!\n";
    return 0;
}
