#include <iostream>
using namespace std;
/*
- To achieve runtime polymorphism we use virtual keyword
- to override the base class function for the derived class objct it is used
*/

class base
{
public:
    virtual void display()
    {
        cout << "This is base class.\n";
    }
};
class derived : public base
{
public:
    void display()
    {
        cout << "This is derived class.\n";
    }
};

/*
pure virtual function / abstract function
- it is a virtual function whose implementation is not done in the base class
- it is initialized with 0 ie. assigned value 0
- it is used to create interface
*/

class shape
{
public:
    virtual float area() = 0;
};
class rectangle : public shape
{
private:
    int length, breadth;

public:
    rectangle() {};
    rectangle(int l, int b)
    {
        this->length = l;
        this->breadth = b;
    }
    float area()
    {
        return length * breadth;
    }
};
class circle : public shape
{
private:
    int radius;

public:
    circle(int r)
    {
        this->radius = r;
    }
    float area()
    {
        return 3.1425 * radius * radius;
    }
};

int main()
{
    derived d;
    d.display();
    base *b;
    b = new derived;
    b->display();

    cout << endl;
    cout << " Pure Virtual Functions.\n";
    circle c(4);
    cout << "Area of Circle is : " << c.area();
    cout << endl;

    shape *s;
    s = new rectangle(4, 9);
    cout << "Area of Rectangle : " << s->area();

    return 0;
}