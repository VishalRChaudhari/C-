#include <iostream>
#include<math.h>
using namespace std;
/*
enum days
{
    mon,
    tue,
    wed,
    thu,
    fri,
    sat,
    sun
};
typedef int marks;

int main()
{
    days day = mon;
    marks m1, m2;
    cout << "Enter m1 marks: ";
    cin >> m1;
    cout << "Enter m2 marks: ";
    cin >> m2;

    cout << m1 << " " << m2;

    return 0;
}*/

void count()
{
    string str = "how Many Words";
    int vowel=0,consonant=0,space =0;
    for(int i=0;str[i] != '\0';i++)
    {
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
        else if(str[i]==' ')
        {
            space++;
        }
        else
        consonant++;
    }
    cout<<"vowels are: "<<vowel<<endl;
    cout<<"consonants are: "<<consonant<<endl;
    cout<<"words are: "<<space+1;
}

int addition(int n)
{
   int sum=0;
    if(n<=1)
    {
        return 1;
    }
    sum=n+addition(n-1);
    return sum;
}
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

   
}
string name()
{
    string name;
    cout<<"Enter name :"<<endl;
   // getline(cin,name);
    return name;

}
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    addition(n);
    cout<<"sum is: "<<addition(n);
    
  /* int x=5,y=10;
   cout<<"past "<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<"present "<<x<<" "<<y<<endl;*/
   cout<< name();

}


