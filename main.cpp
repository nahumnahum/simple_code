#include <iostream>

double intToDouble(const int& i) {
    double d = static_cast<double>(i);
    return d;
}

int main()
{
    std::cout << "welcome to my program!" << std::endl;
    int i = 5;
    double d = intToDouble(i);
    std::cout << "the size of d is: " << sizeof(d) << std::endl;
    return 0;
}
