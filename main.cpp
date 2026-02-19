#include <iostream>

void intro() {
    // Display header
    std::cout << "====================================" << std::endl;
    std::cout << "       PERSONAL INTRODUCTION        " << std::endl;
    std::cout << "====================================" << std::endl;

    // Display basic info
    std::cout << "Name: Dimitri Sifoua" << std::endl;
    std::cout << "Role: Software Engineer" << std::endl;
    std::cout << "Label: Data, ML, Ops" << std::endl;

    // Educational background section
    std::cout << "\nEDUCATION" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "- Master of Science - MSc, Computer Science" << std::endl;
    std::cout << "  University of Quebec at Chicoutimi, Canada" << std::endl;
    std::cout << "- Master of Engineering - MEng, Software Engineering" << std::endl;
    std::cout << "  University of Littoral, School of Engineering, France" << std::endl;
    std::cout << "- Bachelor of Technology - BTech, Computer System and Networks" << std::endl;
    std::cout << "  African Institute of Computer Science, Cameroon" << std::endl;

    // Display footer
    std::cout << "====================================" << std::endl;
}

void primitives() {
    std::cout << "bool: " << sizeof(bool) << " bytes" << std::endl;
    std::cout << "char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "short: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "long: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long: " << sizeof(long long) << " bytes" << std::endl;
    std::cout << "float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "long double: " << sizeof(long double) << " bytes" << std::endl;
}

int main() {
    intro();

    primitives();

    return 0;
}