#include <iostream>

void bakeMuffins();
void bakeMuffins (std::string addon1);
void bakeMuffins (std::string addon1, std::string addon2);

int main() {
    bakeMuffins();
    bakeMuffins("chocolate chip");
    bakeMuffins("chocolate chip", "blueberry");
    return 0;
}

void bakeMuffins() {
    std::cout << "Here are your muffins!\n";
}
void bakeMuffins(std::string addon1) {
    std::cout << "Here are your " << addon1 << " muffins!\n";
}
void bakeMuffins(std::string addon1, std::string addon2) {
    std::cout << "Here are your " << addon1 << ", " << addon2 << " muffins!\n";
}
