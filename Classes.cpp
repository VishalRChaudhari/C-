#include <iostream>
using namespace std;

class Student
{

private:
    int rollNo;
    string name;
    char div;

public:
    Student();
    Student(int rollNo, string name, char Div = 'B');
    void display();
};

Student ::Student() {};

Student ::Student(int rn, string nm, char Div)
{
    this->rollNo = rn;
    this->name = nm;
    this->div = Div;
}

void Student ::display()
{
    cout << "Name of Student is : " << name << endl;
    cout << "Roll no of Student is : " << rollNo << endl;
    cout << "Division of Student is : " << div << endl;
}

class rectangle
{
private:
    int length;
    int breadth;
    int height;

public:
    rectangle();
    rectangle(int length,
              int breadth,
              int height);
    int getlength()
    {
        return length;
    };
    int getbreadth()
    {
        return breadth;
    }
    int getheight()
    {
        return height;
    }
    void setlength(int l);
    void setbreadth(int b);
    void setheight(int h);
    int Area(int length, int breadth)
    {
        return length * breadth;
    };
};
rectangle ::rectangle(int l, int b, int h)
{
    length = l;
    breadth = b;
    height = h;
}
void rectangle ::setlength(int l)
{
    length = l;
}

void rectangle ::setbreadth(int b)
{
    breadth = b;
}
void rectangle ::setheight(int h)
{
    height = h;
}



int main()
{
    Student s1(45, "vishal");
    s1.display();

    rectangle r1(4, 5, 6);
    cout << " breadth :" << r1.getbreadth();
    cout << " height :" << r1.getheight();
    cout << " length :" << r1.getlength();

    r1.setbreadth(8);
    cout << " breadth :" << r1.getbreadth();

    return 0;
}