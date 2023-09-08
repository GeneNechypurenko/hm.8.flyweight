#pragma once

#include "Attributes.h"

class iShape abstract
{
public:
    virtual void draw() abstract;
};

class Circle : public iShape
{
private:
    iAttributes* attributes;

public:
    Circle(iAttributes* a);
    void draw() override;
};

class Square : public iShape
{
private:
    iAttributes* attributes;

public:
    Square(iAttributes* a);
    void draw() override;
};

class Triangle : public iShape
{
private:
    iAttributes* attributes;

public:
    Triangle(iAttributes* a);
    void draw() override;
};