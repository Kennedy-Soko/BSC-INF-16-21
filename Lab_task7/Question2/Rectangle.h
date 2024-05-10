#pragma once

class Rectangle {

    public:
    Rectangle();
    ~Rectangle(); 

    void setLength(float l);
    void setWidth(float w);
    float getLength() const;
    float getWidth() const;

    float calculateArea() const;
    
    private:
    float length;
    float width;


};


