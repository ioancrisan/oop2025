//
// Created by IoanCrisan on 11.04.2025.
//

#include "CalculateAreaRequestHandler.h"
#include "CalculateAreaRequest.h"
#include "../Area.h"

using namespace geometry;

namespace geometry {
    namespace mediator {
        shared_ptr<IResponse> CalculateAreaRequestHandler::Handle(shared_ptr<IRequest> request) {
            auto r = dynamic_pointer_cast<CalculateAreaRequest>(request);
            auto area = make_shared<Area>(r->getShape()->getArea());
            return area;
        }
    } // mediator
} // geometry
