#include <iostream>
#include <memory>
#include <vector>

#include "Controller.h"
#include "Repository.h"
#include "VectorRepository.h"
#include "geometry/Area.h"
#include "geometry/Circle.h"
#include "geometry/Point.h"
#include "geometry/Rectangle.h"
#include "geometry/Square.h"
#include "geometry/mediator/CalculateAreaRequest.h"
#include "geometry/mediator/CalculateAreaRequestHandler.h"
#include "mediator/Mediator.h"
#include "model/Person.h"

using namespace std;
using namespace geometry;
using namespace geometry::mediator;
using namespace model;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    shared_ptr<Repository<Person>> personRepo = make_shared<VectorRepository<Person>>();

    // constraint failure
    // auto circleRepo = make_shared<VectorRepository<Circle>>();

    auto controller = make_shared<Controller>(personRepo);

    auto adultFilter = [](const shared_ptr<Person>& person) {
        return person->getAge() >= 18;
    };

    auto adults = personRepo->Query(adultFilter);

    auto minors = personRepo->Query([](const shared_ptr<Person>& person) {
        return person->getAge() < 18;
    });

    return 0;
}
