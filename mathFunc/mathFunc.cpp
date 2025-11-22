#include <iostream>
#include <cmath>
//useful math related functions

int main() {
    double x = 3.99;
    //double y = 4;
    double z;

    //z = std::max(x, y); //std::max() returns the max value between 2 parameters
    //z = std::min(x, y); //std::min() returns the min value between 2 parameters

    //z = pow(2, 4);
    //z = sqrt(9);
    //z = abs(-6);
    //z = round(x);
    //z = ceil(x);
    z = floor(x);
    std::cout << z << '\n';
    return 0;
}
