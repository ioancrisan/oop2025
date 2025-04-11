//
// Created by IoanCrisan on 11.04.2025.
//

#ifndef CALCULATEAREAREQUESTHANDLER_H
#define CALCULATEAREAREQUESTHANDLER_H
#include <memory>

#include "../../mediator/IRequestHandler.h"

using namespace mediator;

namespace geometry {
    namespace mediator {
        class CalculateAreaRequestHandler: public IRequestHandler {
        public:
            shared_ptr<IResponse> Handle(shared_ptr<IRequest> request) override;
        };
    } // mediator
} // geometry

#endif //CALCULATEAREAREQUESTHANDLER_H
