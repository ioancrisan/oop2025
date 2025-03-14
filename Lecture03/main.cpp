#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

class Rectangle {
public:
    Rectangle()
        : width(10), height(10){}
    Rectangle(int width, int height)
        : width(width), height(height) {}

    /**
     * Get the area of the rectangle
     * @return the area of the rectangle
     */
    int getArea() {
        return this->width * this->height;
    }

    int width;
    int height;
};

int r_width;
int r_height;

int getArea(int w, int h) {
    return w * h;
}

Rectangle* createRectangle() {
    return new Rectangle();
}

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Point p = {1, 2};
    Rectangle r(3, 4);

    // if (true) {
    //     // heap allocation
    //     auto pr3 = new Rectangle(5, 6);
    // }

    int x = 1 + 3;
    auto r4 = createRectangle();

    auto y = 1;
    auto z = &y;

    // will display: 1 (address) 1
    cout << y << " " << z << " " << *z << endl;

    /* uninitialized pointer
    Rectangle* r2;

    cout << "Rectangle area 2: " << (*r2).getArea() << endl;
    */
    cout << "Rectangle area: " << r4->getArea() << endl;
    cout << "Rectangle area: " << getArea(r_width, r_height) << endl;

    delete r4;

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.