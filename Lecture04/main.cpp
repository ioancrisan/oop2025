#include <iostream>

#include "geometry/Point.h"
#include "geometry/Rectangle.h"

using namespace std;
using namespace geometry;

// never use global variables (almost :))
// int r_width;
// int r_height;

int getArea(int w, int h) {
    return w * h;
}

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Point p = {1, 2};
    Rectangle r(-3, 4);

    r.setWidth(10);

    // cannot access private members
    // r.width = 5;
    auto o = r.getOrigin();
    o.x = 4;

    cout << "Rectangle origin: " << r.getOrigin().x << " " << r.getOrigin().y << endl;
    cout << "Rectangle origin: " << o.x << " " << o.y << endl;
    cout << "Rectangle area: " << r.getArea() << endl;

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.