#include <iostream>
using namespace std;

double calculateTriangleArea(double base, double height) {
  return 0.5 * base * height;
}

double calculateRectangleArea(double length, double width) {
  return length * width;
}

double calculateSquareArea(double side) {
  return side * side;
}

int main() {
  int choice;
  double base, height, length, width, side;

  while (true) {
    cout << "Please Select the area of the shape to calculate" << endl;
    cout << "1. Triangle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Square" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 4) {
      break; 
    }

    if (choice < 1 || choice > 4) {
      cout << "Your input was: " << choice << " which is an invalid input. Please enter a valid input." << endl;
      continue;
    }

    switch (choice) {
      case 1:
        cout << "Enter base and height of the triangle: ";
        cin >> base >> height;
        cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
        break;
      case 2:
        cout << "Enter length and width of the rectangle: ";
        cin >> length >> width;
        cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
        break;
      case 3:
        cout << "Enter side of the square: ";
        cin >> side;
        cout << "Area of the square: " << calculateSquareArea(side) << endl;
        break;
    }
  }

  return 0;
}