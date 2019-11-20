#include <iostream>
using namespace std;

class Shape{
public:
    Shape() {}
    Shape(double width, double height)//:width(w), height(h) -- így is lehetne 
    {
        this->width = width;
        this->height = height;
    }

    virtual double get_area() = 0;
    virtual double get_perimeter() = 0;

protected:
    double height;
    double width;
};

class Rectangle : public Shape//, public Render
{
public:
    Rectangle() : Shape()//,Render()
    {}
    Rectangle(double a, double b) : Shape(a, b)//,Render(a, b)
    {}
    double get_area()
    {
        return this->width * this->height;
    }
    double get_perimeter()
    {
        return (this->width + this->height) * 2;
    }
};

int main()
{
    Shape *r = new Rectangle(5, 5);
    cout << r->get_area() << " " << r->get_perimeter() << endl;
    return 0;
}