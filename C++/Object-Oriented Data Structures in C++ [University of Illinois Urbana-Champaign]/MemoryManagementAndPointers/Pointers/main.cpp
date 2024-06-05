#include <iostream>
#include <string>

int main()
{
    int x = 42;
    std::cout << "Value of x: " << x << std::endl;

    int *addressOfX = &x;
    std::cout << "Address of x: " << addressOfX << std::endl;

    int valueStoredInXAddress = *addressOfX;
    std::cout << "Address of x: " << valueStoredInXAddress << std::endl;

    *addressOfX = 69;
    std::cout << "Mutated value of x: " << x << std::endl;

    int *y = nullptr;
    std::cout << "Uninitialized Address of y: " << &y << std::endl;
    // std::cout << "Uninitialized Value of y: (SEGMENTATION FAULT) " << *y << std::endl;

    y = new int(20);
    std::cout << "Initialized value of y: " << *y << std::endl;

    return 0;
};