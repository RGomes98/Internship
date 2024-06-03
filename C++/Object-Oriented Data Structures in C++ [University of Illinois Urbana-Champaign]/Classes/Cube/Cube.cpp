#include "Cube.h"

namespace myNamespace
{
    double Cube::getVolume()
    {
        return length_ * length_ * length_;
    }

    double Cube::getSurface()
    {
        return 6 * length_ * length_;
    }

    void Cube::setLength(double length)
    {
        length_ = length;
    }
}