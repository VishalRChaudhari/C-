#include <iostream>
using namespace std;

// basics
/*int main(){
//pointers

int a=2;
int* b = &a;


cout<<"the adress of a "<<b<<endl;
cout<<"the adress of a "<<&a<<endl;

//dereference

cout<<*b<<endl;

//ponters to pointers

int** c= &b;
cout<<c<<endl;
cout<<**c<<endl;

int*** d= &c;
cout<<d;
return 0;
}*/

/*int main(){

    int a = 45;
    int *p =&a;

    cout<<a<<endl;
    cout<<&a<<endl; //adress of a
    cout<<p<<endl;  //p=&a
    cout<<*p<<endl; //p is pointing on a
    cout<<&p<<endl; //adress of p
    return 0;
}*/

// heap memory allocation
int main()
{
    int A[] = {1, 2, 3, 4, 5}; // memory in stack
    int *p;
    p = new int[5]; // memory in heap

    // accessibility
    A[2] = 15; // to access memory in stack
    p[2] = 15; // to access memory in heap

    // deallocation

    delete[] p;
    p = nullptr; //'p=NULL' can also be used

    // take input
    int size;
    cout << "enter the number of elements : ";
    cin >> size;

    /*int a[size];
    cout << sizeof a << endl;*/
    return 0;
}

// size changes
int main()
{
    int *p = new int[10];

    delete[] p;
    // to change the size of an array later
    p = new int[20];
    return;
}

// pointers arithmetic
int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int *p = A;
    int *q = [3];

    // 1.p++  the pointer will move to the next adress

    // 2.p--  the pointer will get decremented toprevious adress

    // 3.p=p+ const ...here the const value can be any int value ..the adress will be moved to next adress refering to the const value

    // 4.p=p- const ...here the const value can be any int value  ..the adress will be moved to previous adress refering to the const value

    // 5.to get the distance between two adresses ..here the reference pointer i.e.*q will be used
    int d = q - p;
    cout << d;

    return 0;
}