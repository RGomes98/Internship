#include <iostream>

void foo()
{
    int x = 500;
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Address of x: (address number of x is smaller than address number of y) " << &x << std::endl;
}

int main()
{
    int y = 100;

    std::cout << "Value of y: " << y << std::endl;
    std::cout << "Address of y: (address number of y is bigger than address number of x) " << &y << std::endl;

    foo();

    return 0;
};