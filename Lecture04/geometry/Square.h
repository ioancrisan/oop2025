//
// Created by IoanCrisan on 21.03.2025.
//

#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"

namespace geometry {
    class Square final : public Rectangle {
    public:
        Square()
            : Square(10) {  }

        explicit Square(int length)
            : Rectangle(length, length) {  }

        void setWidth(int width) override;

        void setHeight(int height) override;

        int getPerimeter();
    };
}





#endif //SQUARE_H
