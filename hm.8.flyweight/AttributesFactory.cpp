#include "AttributesFactory.h"

iAttributes* AttributesFactory::getAttributes(const string color, int width)
{
    string key = color + to_string(width);

    if (aMap.find(key) == aMap.end())
    {
        aMap[key] = new Attributes(color, width);
    }

    return aMap[key];
}
