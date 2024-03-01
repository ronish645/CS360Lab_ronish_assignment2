#include <iostream>

class Rectangle {
    float length;
    float width;

public:
    void setLength(float l) {
        length = l;
    }

    void setWidth(float w) {
        width = w;
    }

    float perimeter() {
        return 2 * (length + width);
    }

    float area() {
        return length * width;
    }

    void show() {
        std::cout << "Length: " << length << ", Width: " << width << std::endl;
    }

    int sameArea(Rectangle r) {
        return this->area() == r.area();
    }
};

int main() {
    Rectangle r1, r2;

    r1.setLength(5);
    r1.setWidth(2.5);
    r2.setLength(5);
    r2.setWidth(18.9);

    std::cout << "Rectangle 1: ";
    r1.show();
    std::cout << "Area: " << r1.area() << ", Perimeter: " << r1.perimeter() << std::endl;

    std::cout << "Rectangle 2: ";
    r2.show();
    std::cout << "Area: " << r2.area() << ", Perimeter: " << r2.perimeter() << std::endl;

    std::cout << "Do the rectangles have the same area? " << (r1.sameArea(r2) ? "Yes" : "No") << std::endl;

    r1.setLength(15);
    r1.setWidth(6.3);

    std::cout << "Rectangle 1: ";
    r1.show();
    std::cout << "Area: " << r1.area() << ", Perimeter: " << r1.perimeter() << std::endl;

    std::cout << "Rectangle 2: ";
    r2.show();
    std::cout << "Area: " << r2.area() << ", Perimeter: " << r2.perimeter() << std::endl;

    std::cout << "Do the rectangles have the same area? " << (r1.sameArea(r2) ? "Yes" : "No") << std::endl;

    return 0;
}
