#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a square" << endl;
    }
};

int main()
{
    Shape shape;
    shape.draw();
    Circle circle;
    circle.draw();
    Square square;
    square.draw();
    Shape *shape1 = new Shape();
    shape1->draw();
    return 0;
}