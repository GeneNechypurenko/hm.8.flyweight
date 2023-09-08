#pragma once

#include <iostream>
#include <string>

using namespace std;

class iAttributes abstract
{
public:
    virtual void apply() abstract;
};

class Attributes : public iAttributes
{
private:
    string color;
    int width;

public:
    Attributes(const string c, int w);

    void apply() override;
};

