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

int main()
{
    derived d;
    d.display();
    base *b;
    b = new derived;
    b->display();
    return 0;
}