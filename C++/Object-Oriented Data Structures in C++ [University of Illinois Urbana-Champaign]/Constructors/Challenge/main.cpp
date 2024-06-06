#include <iostream>

class Pair
{
public:
    int *pa, *pb;
    Pair(int, int);
    Pair(const Pair &);
    ~Pair();
};

Pair::Pair(int a, int b)
{
    pa = new int(a);
    pb = new int(b);
};

Pair::Pair(const Pair &obj)
{
    pa = new int(*obj.pa);
    pb = new int(*obj.pb);
};

Pair::~Pair()
{
    delete pa;
    delete pb;
};

int main()
{
    Pair p(15, 16);
    Pair q(p);
    Pair *hp = new Pair(23, 42);
    delete hp;

    std::cout << "Success!" << std::endl;
    return 0;
}