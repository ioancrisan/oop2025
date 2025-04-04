//
// Created by IoanCrisan on 04.04.2025.
//

#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include "math.h"

namespace geometry {
    class Circle : public Shape {
    public:
        Circle() : Circle(10) {
        }

        /**
         * The explicit keyword in C++ is used to prevent
         * implicit conversions and copy-initialization that
         * might otherwise occur.
         * When a constructor is declared as explicit,
         * it can only be used for direct initialization,
         * not for implicit conversions or copy-initialization.
         * @param radius
         */
        explicit Circle(int radius)
            : radius(radius) {
        }

        int getArea() const override {
            return M_PI * radius * radius;
        }

        void setRadius(int r) {
            radius = r;
        }

    private:
        int radius;
    };
} // geometry

#endif //CIRCLE_H
