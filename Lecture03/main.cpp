#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

class Rectangle {
public:
    Rectangle() {}
    Rectangle(int width, int height)
        : width(width), height(height) {}

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
    return new Rectangle(7, 8);
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

    delete r4;
    auto y = 1;
    auto z = &y;

    // will display: 1 (address) 1
    cout << y << " " << z << " " << *z << endl;

    /* uninitialized pointer
    Rectangle* r2;

    cout << "Rectangle area 2: " << (*r2).getArea() << endl;
    */
    cout << "Rectangle area: " << r.getArea() << endl;
    cout << "Rectangle area: " << getArea(r_width, r_height) << endl;

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.