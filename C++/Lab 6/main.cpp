// Polymorphism.cpp

#include <iostream>

using namespace std;

// A simple Shape interface which provides a method to get the Shape's area
class Shape {
public:
    virtual float getArea() const = 0;
};


// A Rectangle is a Shape with a specific width and height
class Rectangle : public Shape {
private:
    float width;
    float height;

public:
    Rectangle(float width, float height) : width(width), height(height) { }
    virtual float getArea() const { return width * height; }
};


// A Circle is a Shape with a specific radius
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float radius) : radius(radius) { }
    virtual float getArea() const { return 3.14159f * radius * radius; }
};


// Prints the area of a Shape to standard output.
void printArea(const Shape& shape) {
    cout << "Area: " << shape.getArea() << endl;
}


// Main function to test the functions
int main() {

    
    Rectangle r(2, 6);


    Shape* shape = &r;

    cout << r.getArea() << endl;      
    cout << shape->getArea() << endl; 



    Circle c(5);

    // Tell Shape pointer to point to the Circle
    shape = &c;

    printArea(r);       // Print Rectangle's area
    printArea(c);       // Print Circle's area
    printArea(*shape);  // Print shape's dynamic-type (Circle)'s area

    return 0;
}
