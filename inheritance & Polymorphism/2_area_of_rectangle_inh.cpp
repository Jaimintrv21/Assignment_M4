// 2. Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;

class Rectangle {
protected:
    float length, width;

public:
    void set_data(float l, float w) {
        length = l;
        width = w;
    }

    float calculateArea() {
        return length * width;
    }
};

class Calculator : public Rectangle {
public:
    void get_data() {
        cout << "\n\n\t Enter length of the rectangle: ";
        cin >> length;
        cout << "\n\n\t Enter width of the rectangle: ";
        cin >> width;
        set_data(length, width);
        cout << "\n\n\t Area of the rectangle: " << calculateArea() << endl;
    }
};

int main() {
    Calculator c;
    c.get_data();
    return 0;
}

