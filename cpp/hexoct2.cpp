// hexoct2.cpp -- display values in hex and octal
#include <iostream>

int main()
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    std::cout << "Monsieur cuts a striking figure!" << std::endl;
    std::cout << "chest = " << chest << " (decimal for 42)" << std::endl;
    std::cout << std::hex; // manipulator for changing number base
    std::cout << "waist = " << waist << " (hexdecimal for 42)" << std::endl;
    std::cout << std::oct; // manipulator for changing number base
    std::cout << "inseam = " << inseam << " (octal for 42)" << std::endl;
    return 0;
}
