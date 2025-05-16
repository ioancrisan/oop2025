//
// Created by IoanCrisan on 11.04.2025.
//

#ifndef CALCULATEAREA_H
#define CALCULATEAREA_H
#include <memory>

#include "../Shape.h"
#include "../../mediator/Request.h"

using namespace mediator;
using namespace std;

namespace geometry {
    namespace mediator {
        static const string& CALCULATE_AREA { "CalculateArea" };

        class CalculateAreaRequest : public Request {
        public:
            CalculateAreaRequest(const shared_ptr<Shape> &shape)
            : Request(CALCULATE_AREA) {
                if (shape == nullptr) {
                    __throw_invalid_argument("shape");
                }

                this->shape = shape;
            }

            shared_ptr<Shape> getShape() const {
                return shape;
            }

        private:
            shared_ptr<Shape> shape;
        };
    } // mediator
} // geometry

#endif //CALCULATEAREA_H
