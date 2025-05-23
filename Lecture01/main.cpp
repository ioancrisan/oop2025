#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

class Rectangle {
public:
    Rectangle(int width, int height) : width(width), height(height) {}

    int getArea() {
        return width * height;
    }

    int width;
    int height;
};

int summe(int x, int y) {
    return x + y + summe(x, y);
}

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    auto sum = summe(1, 2);
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the
    // <b>lang</b> variable name to see how CLion can help you rename it.
    auto lang = "C++";
    auto k = 2;
    std::cout << "Hello and welcome to " << lang << "!\n";

    Point p = {1, 2};
    Rectangle r(3, 4);

    cout << "Rectangle area: " << r.getArea() << endl;

    for (int i = 1; i <= 5; i++) {
        // TIP Press <shortcut actionId="Debug"/> to start debugging your code.
        // We have set one <icon src="AllIcons.Debugger.Db_set_breakpoint"/>
        // breakpoint for you, but you can always add more by pressing
        // <shortcut actionId="ToggleLineBreakpoint"/>.
        std::cout << "i = " << i << std::endl;
    }

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.