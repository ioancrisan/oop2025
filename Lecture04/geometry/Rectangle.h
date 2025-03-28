//
// Created by IoanCrisan on 21.03.2025.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"

namespace geometry {

    class Rectangle {
    public:
        Rectangle() : Rectangle(10, 10) {
        }

        Rectangle(int width, int height);

        Rectangle(const Rectangle &source);

        /**
         * Get the area of the rectangle
         * @return the area of the rectangle
         */
        int getArea();

        static Rectangle *create();

        ~Rectangle();

        /**
         * Get the width of the rectangle
         * @return the width of the rectangle
         */
        int getWidth();

        void setWidth(int width);

        /**
         * Get the height of the rectangle
         * @return the height of the rectangle
         */
        int getHeight();

        void setHeight(int height);

        /**
         * Get the origin of the rectangle
         * @return the origin of the rectangle
         */
        Point& getOrigin();

//    protected: // protected members are accessible from derived classes
                 // recommended to use only on methods, not member variables.
                 // CAUTION: use with case, not to break encapsulation!.
    protected:
        int width;
        int height;

        Point *origin;
    };
} // geometry

#endif //RECTANGLE_H
