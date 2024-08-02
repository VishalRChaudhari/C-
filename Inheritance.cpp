#include <iostream>
using namespace std;

class base
{

public:
    int x = 5;
};
class derived : public base
{
public:
    int y = 7;
    void display()
    {
        cout << x << " " << y;
    }
};

class rectangle
{
private:
    int length, breadth;

public:
    int getlength() { return length; };
    int getbreadth() { return breadth; };
    void setlength(int l) { length = l; };
    void setbreadth(int b) { breadth = b; };
    int area()
    {
        return length * breadth;
    };
};

class cuboid : public rectangle
{
private:
    int height;

public:
    cuboid(int h, int l, int b)
    {
        height = h;
        setlength(l);
        setbreadth(b);
    }
    int setheight(int h) { height = h; }
    int getheight() { return height; }
    int volume()
    {
        return height * getlength() * getlength();
    }
};

class Base
{
public:
    Base()
    {
        cout << "This is constructor of base class \n";
    }
    Base(int x)
    {
        cout << "The base class parameter: " << x << endl;
    }
};

class Derived : public Base
{
};

int main()
{
    /* cuboid C1(4, 8, 9);
     cout << C1.getheight() << endl;
     cout << C1.volume() << endl;
     cout << C1.area() << endl;

     cout << "\n";

     rectangle R1;

     R1.setlength(8);
     R1.setbreadth(5);
     cout << R1.getlength() << endl;
     cout << R1.getbreadth() << endl;
     cout << R1.area() << endl;*/

    // Base B(7);
    /*
    method 1 -> base class pointer to derived class object
    base *b;
    b = new derived();
    b->x = 5;
    b;*/

    // method  2 -> base class pointer to derived class object
    /*derived d;
    base *b = &d;
    b->x = 4;
    cout << b->x;*/

    return 0;
}
