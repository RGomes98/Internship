#include <iostream>

template <typename T>
std::string isBiggerThan(T a, T b)
{
    return (a > b) ? "Yes!" : "No!";
}

int main()
{
    std::cout << "Is 1 bigger than 2?: " << isBiggerThan(1, 2) << std::endl;
    std::cout << "Is 'B' ASCII value bigger than 'A' ASCII value?: " << isBiggerThan('B', 'A') << std::endl;
    return 0;
}