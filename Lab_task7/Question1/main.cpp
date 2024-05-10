#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
   
    Rectangle rectangle1;

    float length1, width1;
    cout << "Enter the length of the first rectangle: ";
    cin >> length1;
    rectangle1.setLength(length1);

    cout << "Enter the width of the first rectangle: ";
    cin >> width1;
    rectangle1.setWidth(width1);

    cout << "Area of the first rectangle: " << rectangle1.calculateArea() << endl;

   
    float length2;
    float width2;
    cout << "Enter the length of the second rectangle: ";
    cin >> length2;

    cout << "Enter the width of the second rectangle: ";
    cin >> width2;

    Rectangle rectangle2(length2, width2);

    cout << "Area of the second rectangle: " << rectangle2.calculateArea() << endl;

    return 0;
}
