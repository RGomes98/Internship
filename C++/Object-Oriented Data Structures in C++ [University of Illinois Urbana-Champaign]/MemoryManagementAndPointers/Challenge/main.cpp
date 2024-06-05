#include <iostream>

class Pair
{
public:
    int first, second;
    void check()
    {
        first = 5;
        std::cout << "Success!" << std::endl;
    }
};

Pair *pairFactory()
{
    Pair *p = new Pair();
    return p;
}

int main()
{
    Pair *p;

    p = pairFactory();
    p->check();

    delete p;
    return 0;
}
