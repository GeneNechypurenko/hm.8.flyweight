#pragma once

#include <map>

#include "Attributes.h"

class AttributesFactory
{
private:
    map<string, iAttributes*> aMap;

public:
    iAttributes* getAttributes(const string color, int width);
};

