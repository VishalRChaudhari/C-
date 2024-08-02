#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    char ch = 'A';

    int *p = &a;
    cout << "p is" << p << endl;
    cout << "*p is" << *p << endl;
    cout << "&a is " << &a << endl;

    int num = 5;
    int *q = &num;
    cout << "the value of num is : " << num << endl;
    (*q)++;
    cout << "the next state value of num is : " << num << endl;
    //   num++;
    // cout<<num;

    int num1 = 5;
    int *m = &num1;
    cout << "the value of num1 is :" << num << endl;
    cout << "the value of *a is " << *m<< endl;
    cout << " the value of a is : " << m << endl;
    cout << "The value after increment is : " << (*m)++ << endl ;
    cout << "value incremented of a is : " << (m = m + 1);

    return 0;
}