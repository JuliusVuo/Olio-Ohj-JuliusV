#include "wheel.h"

Wheel::Wheel() {}

Wheel::Wheel(int sz, string tp)
{
    setSize(sz);
    setType(tp);
}

int Wheel::getSize()
{
    return size;
}

void Wheel::setSize(int value)
{
    size = value;
}

string Wheel::getType()
{
    return type;
}

void Wheel::setType(string value)
{
    type = value;
}
