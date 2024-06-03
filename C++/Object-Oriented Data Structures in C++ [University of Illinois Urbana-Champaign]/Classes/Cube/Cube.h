#pragma once

namespace myNamespace
{
    class Cube
    {
    public:
        double getVolume();
        double getSurface();
        void setLength(double length);

    private:
        double length_;
    };
}