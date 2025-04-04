#include <iostream>
#include <vector>

#include "geometry/Circle.h"
#include "geometry/Point.h"
#include "geometry/Rectangle.h"
#include "geometry/Square.h"

using namespace std;
using namespace geometry;

// never use global variables (almost :))
// int r_width;
// int r_height;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // auto s = new Shape();  // cannot create an instance of abstract class

    auto shapes = vector<Shape*>();

    Rectangle r(3, 4);

    shapes.push_back(&r);

    Circle c(10);
    shapes.push_back(&c);

    Rectangle* s = new Square(22);
    s->setHeight(15);
    shapes.push_back(s);

    for (auto s : shapes) {
        cout << "Shape area: " << s->getArea() << endl;
    }

    return 0;
}
