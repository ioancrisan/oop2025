#include <iostream>
#include <memory>
#include <vector>

#include "geometry/Area.h"
#include "geometry/Circle.h"
#include "geometry/Point.h"
#include "geometry/Rectangle.h"
#include "geometry/Square.h"
#include "geometry/mediator/CalculateAreaRequest.h"
#include "geometry/mediator/CalculateAreaRequestHandler.h"
#include "mediator/Mediator.h"

using namespace std;
using namespace geometry;
using namespace geometry::mediator;

shared_ptr<Rectangle> work_with_shapes() {
    auto shapes = vector<shared_ptr<Shape>>();

    auto r1 = make_shared<Rectangle>(3, 4);

    shapes.push_back(r1);

    auto c = make_shared<Circle>(10);
    shapes.push_back(c);

    auto r2 = make_shared<Square>(22);
    r2->setHeight(15);
    shapes.push_back(r2);

    for (auto s : shapes) {
        cout << "Shape area: " << s->getArea() << endl;
    }

    return r2;
}

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    auto rectangle = make_shared<Rectangle>(12, 34);

    auto m = make_shared<Mediator>();
    m->RegisterHandler(CALCULATE_AREA, make_shared<CalculateAreaRequestHandler>());

    auto area = dynamic_pointer_cast<Area>(m->Handle(make_shared<CalculateAreaRequest>(rectangle)));

    cout << "Area of rectangle: " << area->getValue() << endl;

    auto square = make_shared<Square>(100);
    area = dynamic_pointer_cast<Area>(m->Handle(make_shared<CalculateAreaRequest>(square)));

    cout << "Area of square: " << area->getValue() << endl;
    return 0;
}
