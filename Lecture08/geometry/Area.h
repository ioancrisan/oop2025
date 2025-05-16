//
// Created by IoanCrisan on 11.04.2025.
//

#ifndef AREA_H
#define AREA_H

#include "../mediator/IResponse.h"

using namespace mediator;

namespace geometry {
    class Area : public IResponse {
    public:
        explicit Area(int value): value(value) {
        }

        int getValue() const;

    private:
        int value;
    };
} // geometry

#endif //AREA_H
