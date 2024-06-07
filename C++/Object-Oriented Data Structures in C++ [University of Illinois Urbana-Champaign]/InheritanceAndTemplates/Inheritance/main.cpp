#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    Shape(double width);
    double getWidth() const;

private:
    double _width;
};

Shape::Shape(double width) : _width(width) {}

double Shape::getWidth() const
{
    return _width;
}

class Cube : public Shape
{
public:
    Cube(double width, string color);
    double getVolume() const;

private:
    string color_;
};

Cube::Cube(double width, string color) : Shape(width), color_(color) {}

double Cube::getVolume() const
{
    return getWidth() * getWidth() * getWidth();
}

int main()
{
    Cube cube(4, "green");
    cout << "Volume: " << cube.getVolume() << ", Width: " << cube.getWidth() << endl;
    return 0;
}