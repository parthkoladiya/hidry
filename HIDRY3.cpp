#include <iostream.h>
#include <conio.h>

class Shape 
{
public:
    float area;
};


class Rectangle : public Shape 
{
public:
    void calculateArea(float length, float width) 
    {
        area = length * width;
    }
};


class Circle : public Shape 
{

public:
    void calculateArea(float radius) 
    {
        area = 3.14159 * radius * radius;
    }
};


class Square : public Shape 
{
public:
    void calculateArea(float side) 
    {    
        area = side * side;
    }
};

void main()
{
    Rectangle rect;
    Circle circle;
    Square square;

    
    rect.calculateArea(5.0, 4.0);
    circle.calculateArea(3.0);
    square.calculateArea(2.5);

    
    cout << "Area of Rectangle: " << rect.area;
    cout << "Area of Circle: " << circle.area ;
    cout << "Area of Square: " << square.area ;

    getch();
}
