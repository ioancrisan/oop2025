#include <iostream>

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
    Rectangle r(3, 4);
    auto r1 = r; // call copy constructor
    auto r2(r);  // call copy constructor

    auto s = new Square(22);
    s->setHeight(15);
    cout << "Square perimeter: " << s->getPerimeter() << endl;

    s->setWidth(10);
    cout << "Square perimeter: " << s->getPerimeter() << endl;

    r.setWidth(10);
    r1.setWidth(20);

    // cannot access private members
    // r.width = 5;
    Point& o = r.getOrigin();
    o.x = 4;

    cout << "r1 w/h: " << r1.getWidth() << " " << r1.getHeight() << endl;
    cout << "r w/h: " << r.getWidth() << " " << r.getHeight() << endl;
    cout << "r1 origin: " << r.getOrigin().x << " " << r.getOrigin().y << endl;
    cout << "r origin: " << r.getOrigin().x << " " << r.getOrigin().y << endl;
    cout << "origin: " << o.x << " " << o.y << endl;
    cout << "Rectangle area: " << r.getArea() << endl;

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.