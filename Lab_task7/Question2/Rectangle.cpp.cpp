#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(float l = 0, float w = 0) : length(l), width(w) {}


Rectangle::~Rectangle() {}

void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::calculateArea() const {
    return length * width;
}
