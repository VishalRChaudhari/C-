#include <iostream>
using namespace std;

class students
{
private:
    int roll_no;
    string name;
    static char Div;

public:
    void setDiv(char d)
    {
        Div = d;
    }
    char getDiv()
    {
        return Div;
    }
    students(string n, int rn)
    {
        roll_no = rn;
        name = n;
    }
    void display()
    {
        setDiv('D');
        cout << "Name is : " << name;
        cout << "\nRoll no is : " << roll_no;
        cout << "\nDivision is : " << getDiv();
    }
};
char students ::Div;
int main()
{
    students rohan("Rohan", 132);
    rohan.display();
}