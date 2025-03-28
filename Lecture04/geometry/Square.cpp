//
// Created by IoanCrisan on 21.03.2025.
//

#include "Square.h"

void geometry::Square::setWidth(int width) {
    Rectangle::setWidth(width);
    Rectangle::setHeight(width);
}

void geometry::Square::setHeight(int height) {
    setWidth(height);
}

int geometry::Square::getPerimeter() {
    return 2 * (getWidth() + getHeight());
}
