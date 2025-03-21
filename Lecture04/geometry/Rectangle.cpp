//
// Created by IoanCrisan on 21.03.2025.
//

#include "Rectangle.h"

#include <stdexcept>

namespace geometry {
    int Rectangle::getArea() {
        return this->width * this->height;
    }

    Rectangle* Rectangle::create() {
        return new Rectangle();
    }

    Rectangle::~Rectangle() {
        delete origin;
    }

    int Rectangle::getWidth() {
        return this->width;
    }

    void Rectangle::setWidth(int width) {
        if (width <= 0) {
            throw std::invalid_argument("Width must be greater than 0");
        }
        this->width = width;
    }

    int Rectangle::getHeight() {
        return this->height;
    }

    Point Rectangle::getOrigin() {
        return *this->origin;
    }
} // geometry