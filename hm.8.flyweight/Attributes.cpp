#include "Attributes.h"

Attributes::Attributes(const string c, int w)
    :
    color(c),
    width(w)
{}

void Attributes::apply()
{
    cout << "Applying color: " << color << ", Line Width: " << width << endl;
}
