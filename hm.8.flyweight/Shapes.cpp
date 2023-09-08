#include "Shapes.h"

Circle::Circle(iAttributes* a)
    :
    attributes(a)
{}

void Circle::draw()
{
    cout << "Drawing Circle ";
    attributes->apply();
}

Square::Square(iAttributes* a)
    :
    attributes(a)
{}

void Square::draw()
{
    cout << "Drawing Square ";
    attributes->apply();
}

Triangle::Triangle(iAttributes* a) 
    :
    attributes(a)
{}

void Triangle::draw()
{
    cout << "Drawing Triangle ";
    attributes->apply();
}
