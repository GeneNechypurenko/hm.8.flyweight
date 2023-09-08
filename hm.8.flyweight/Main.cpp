#include <iostream>
#include <string>

#include "Attributes.h"
#include "Shapes.h"
#include "AttributesFactory.h"

using namespace std;

int main()
{
    AttributesFactory aFactory;

    const int numShapes = 100;
    const int numColors = 5;
    const int numLineWidths = 3;

    iShape* shapes[numShapes];

    for (int i = 0; i < numShapes; i++)
    {
        string color = "Color" + to_string(i % numColors);

        int lineWidth = i % numLineWidths + 1;

        iAttributes* attributes = aFactory.getAttributes(color, lineWidth);

        if (i % 3 == 0)
        {
            shapes[i] = new Circle(attributes);
        }
        else if (i % 3 == 1)
        {
            shapes[i] = new Square(attributes);
        }
        else
        {
            shapes[i] = new Triangle(attributes);
        }
    }

    for (int i = 0; i < numShapes; ++i)
    {
        shapes[i]->draw();
    }

    for (int i = 0; i < numShapes; ++i)
    {
        delete shapes[i];
    }

    return 0;
}
