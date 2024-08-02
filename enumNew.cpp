#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int operations(){
    int num1,num2, choice;
     cout << "select operation to perform\n"
         << "1)add\n"
         << "2)sub\n"
         << "3)mul\n"
         << "4)div\n";
         cin>>choice;

    cout<<"Enter two numbers\n";
    cin>>num1>>num2;
    cout<<"\n";

    switch(choice){
        case 1:
        cout<< num1 + num2;
        break;
        case 2:
        cout<< num1 - num2;
        break;
        
    }

}

int main()
{

    // enum
    enum days
    {
        mon,
        tue,
        wed,
    };

    // typedef

    typedef std::vector<int> vct;

    vct v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for (auto X : v)
    {
        cout << X << " \n";
    }

    // conditional statements
    // if -> if else -> nested if -> switch case -> ladder

    int num1 = 10, num2 = 84, num3 = 55,num4 = 10;
     
    if(num1 > num2){
        cout<<"less\n";
    } 
    else {
        cout<<"nothing";
    }

    operations();
    return 0;
}