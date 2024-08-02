#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void loops()
{
    // for
    vector<int> vec1 = {1, 5, 58, 4, 8, 6, 8};
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    cout << "\n";

    // do while
    int arr1[] = {1, 4, 10, 5, 1, 5, 7};
    int i = 0;
    int x = arr1[i];
    do

    {
        cout << arr1[i] << " ";
        i++;
    } while (i < 7);

    cout << "\n";
    // for each

    for (auto x : vec1)
    {
        cout << x << " ";
    }

    cout << "\n";
    // while
    int k = 0;
    while (vec1[i] > 10)
    {
        cout << vec1[i] << " ";
        i++;
    }
}

int arrFun()
{
    int arr1[5];
    int arr2[] = {1, 2, 3};
    int arr3[2] = {4, 8};

    cout << " 1 : " << sizeof(arr1) << "\n";
    cout << " 1 : " << sizeof(arr2) << "\n";
    cout << " 1 : " << sizeof(arr3) << "\n";
    cout << " 1 : " << sizeof(arr3[1]) << "\n";
    cout << " 1 : " << arr2[1] << "\n";

    cout << "Enter elements for arr1 : ";
    /*for(int i = 0;i<5;i++){
        cin>>arr1[i];

    }
    for(int i = 0;i<5;i++){
        cout<<arr1[i]<<" ";

    }*/
    arr1[0] = 5;
    cout << arr1[0];
    printf("%d\n", arr1[0]);
}

int pointers()
{

    int a = 5;
    int *b = &a;        // prt initialize
    cout << *b << "\n"; // value at *b
    cout << b << "\n";
    cout << a << "\n";
    cout << &a << "\n";

    int *ptr;
    ptr = new int[5];
    cout << "Enter the elements :";
    for (int i = 0; i < 5; i++)
    {
        cin >> ptr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << "\n";
    }
    delete[] ptr;
    ptr = 0;
}

int recurssiveSum(int n)
{
    int sum = 0;
    if (n > 0)
    {
        sum = sum + recurssiveSum(n - 1);
    }
    cout << sum << " \n";
}

template <class T>
T max(T x, T y)
{
    if (x > y)
    {
        cout << x << " is maximum \n";
    }
    else
    {
        cout << y << "is maximum";
    }
}

class rectangle
{

private:
    int length;
    int breadth;
    int height;

public:
    void setData(int length, int breadth, int height);
   
    int area(int l, int b)
    {
        return l * b;
    }
};

void rectangle ::setData(int l, int b, int h)
{
    l = length;
    b = breadth;
    h = height;
}

int main()
{
    // loops();
    // arrFun();
    // pointers();
    // recurssiveSum(5);

    // max<int> (4, 5);

    rectangle r1;
    r1.setData(4, 5, 7);

    cout << r1.area();
    return 0;
}