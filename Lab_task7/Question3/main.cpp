#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"
using namespace std;
using namespace shapes;

int main() {
    int choice;
    float side, base, height, radius;

    do {
        cout << "Options:\n";
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter the side length of the square: ";
                cin >> side;
                Square square(side);
                cout << "Area of the square: " << Area::calculateSquareArea(square) << endl;
                break;
            case 2:
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                Triangle triangle(base, height);
                cout << "Area of the triangle: " << Area::calculateTriangleArea(triangle) << endl;
                break;
            case 3:
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of the circle: " << Area::calculateCircleArea(circle) << endl;
                break;
            case 4:
                cout << "Exiting the program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while(choice != 4);

    return 0;
}
