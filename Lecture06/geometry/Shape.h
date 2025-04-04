//
// Created by IoanCrisan on 04.04.2025.
//

#ifndef SHAPE_H
#define SHAPE_H

namespace geometry {

class Shape {
public:
    /**
     * Get the area of the shape
     * @return the area of the shape
     */
    [[nodiscard]] virtual int getArea() const = 0; // pure virtual function (abstract class)
};

} // geometry

#endif //SHAPE_H
