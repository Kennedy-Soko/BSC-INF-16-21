#pragma once

namespace shapes {
    class Circle {
    private:
        float radius;

    public:
        Circle();
        Circle(float r);
        ~Circle();
        void setRadius(float r);
        float getRadius() const;
    };
}
