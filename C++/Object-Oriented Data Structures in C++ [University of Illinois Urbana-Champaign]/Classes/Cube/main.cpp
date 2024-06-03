#include "iostream"
#include "Cube.h"

int main()
{
    myNamespace::Cube cube;
    cube.setLength(5.75);

    double volume = cube.getVolume();
    double surface = cube.getSurface();

    std::cout << "Volume: " << volume << " " << "Surface: " << surface << std::endl;
    return 0;
}