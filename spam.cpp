#include <iostream>
#include <string.h>
#include <string>
using namespace std;

void min()
{
    int a, b, c;
    cout << "Enter 3 Numbers: ";
    cin >> a >> b >> c;
    if (a < b && a < c)
    {
        cout << a << " is minimum.";
    }
    else
    {
        if (b < c)
        {
            cout << b << " is minimum";
        }
        else
        {
            cout << c << " is minimum";
        }
    }
};

/*Calculate Discounted Bill Amount
Calculate Discounted Bill Amount
function Discount(float amount)
if amount>=5000 offer 20% discount
if 2000<=amount<5000 offer 10% discount
if amount<2000 offer 5% discount
output
print discounted amount ie. bill amount after discount*/
void Discount(int amount)
{
    float disAmount;
    if (amount >= 5000)
    {
        disAmount = amount - amount * 20 / 100.0;
        cout << disAmount;
    }
    else
    {
        if (amount < 5000 && amount >= 2000)
        {
            disAmount = amount - amount * 10 / 100.0;
            cout << disAmount;
        }
        else
        {
            disAmount = amount - amount * 5 / 100.0;
            cout << disAmount;
        }
    }
}

void shortC()
{
    int a = 5, b = 3, c = 2;
    if (a == b || c++ >= b)
    {
    }
    cout << c;
}

void operations()
{
    int a, b, c, choice;
    cout << "select operation to perform\n"
         << "1)add\n"
         << "2)sub\n"
         << "3)mul\n"
         << "4)div\n";
    cin >> choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    switch (choice)
    {
    case 1:
        c = a + b;
        break;

    case 2:
        c = a - b;
        break;

    case 3:
        c = a * b;
        break;

    case 4:
        c = a / b;
        break;

    default:
        cout << "wrong";
    }
    cout << c;
}

void while_loop()
{
    int n, i = 1;
    cout << "enter: ";
    cin >> n;
    while (i <= n)
    {
        cout << i;
        i++;
    }
}

void do_while()
{
    int n, i = 1;
    cout << "enter: ";
    cin >> n;

    do
    {
        cout << i << "\n";
        i++;
    } while (i <= n);
}

void factors()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

void prime()
{
    int count = 0, n, i;
    cout << "enter number: ";
    cin >> n;
    /*
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
            count++;
            }
        }
        if(count==2)
        {
        cout<<n<<" is a prime";
        }
        else
        {
         cout<<"not a prime";
        }*/

    // using while loop
    /*while (i <= n)
    {
        if (n % i == 0)
        {
            count++;
        }
        i++;

        if (count == 2)
        {
            cout << n << " is a prime";
        }
        else
        {
            cout << "not a prime";
        }
    }
*/
}

void sum_of_N()
{
    int n, total = 0;
    cout << "enter number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        total = total + i;
    }
    cout << "The sum is " << total;
}

void condition()
{

    int a, b, c;
    cout << "Enter 3 Numbers: ";
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << a << " is greater";
    else if (b > c)
    {
        cout << b << " is greater";
    }
    else
        cout << c << " is greater";

    /* else
      {
       if (b>c)
       {
           cout<<b<<" is greater";
       }
       else
       cout<<c<<" is greater";
      }*/
}

void looops()
{

    int m, n, r, sum = 0, rev = 0;
    cout << "Enter the number: ";
    cin >> n;
    m = n;

    // to display the digits of a number
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        cout << r << endl;
    }
    // check if armstrong or not
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r * r * r;
    }
    cout << sum << endl;
    if (sum == m)
    {
        cout << "armstrong";
    }
    else
    {
        cout << "not a armstrong";
    }
    // reverse a number
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    // palindrome or not
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    cout << rev;
    if (rev == m)
    {
        cout << "\n its palindrome";
    }
    else
        cout << "not a palindrome";
}

void pointers()
{
    // referencing
    int x;
    int &y = x;
    x = 5;

    x++;
    cout << x << endl;
    y++;
    cout << x << " " << y;
}

void sringss()
{
    // string functions

    // for concatenation
    /*
    char s[50]={"Good "};
    char w[50]={"morning"};
    //cout<<strcat(s,w)<<endl;
    //char *q;
    //q=strncat(s,w,3);
    // cout<<"new "<<strncat(s,w,3);
    strncat(s,w,3);
    cout<<s;*/

    // for copying
    char cp[20] = {"Vishal"};
    char cop[20];
    strcpy(cop, cp);
    // strncpy(cop,cp,3);
    cout << "Main " << cp << endl;
    cout << cop;

    /*
    char q[50];
    cout<<"enter the string: ";
    cin.getline(q,50);

    cout<<"length"<<strlen(q);*/

    /*
     //using getline function
     char s[100];
     cout << "Enter your name: ";
     // cin>>s;
     cin.getline(s, 100);
     cout << "hello " << s<<endl;

     char p[20];
     cout << "Enter your name: ";
     cin.getline(p, 20);
     cout << "hello " << p;

     //using get function
     /*
     char s[100];
     cout << "Enter your name: ";
     // cin>>s;
     cin.get(s, 100);
     cout << "hello " << s<<endl;
     cin.ignore();

     char p[20];
     cout << "Enter your name: ";
     cin.get(p, 20);
     cout << "hello " << p;
     */
}

void stringFunc()
{
    /*
    char str1[20]="Programming";
    char str2[20]="ram";
    //to get the occurence of a sub string from a main string
    cout<<strstr(str1,str2)<<endl;
    cout<<strstr(str1,"gra")<<endl;           //we can directly pass string intead of new string
    //to get the occurence of a character in a string
    cout<<strchr(str1,'r')<<endl;
    //to get the occurence of a character from right of the string
    cout<<strrchr(str1,'r');
    */

    // compare string
    char str3[20] = "Aakanksha";
    char str4[20] = "Vishal";
    cout << "compare = " << strcmp(str3, str4) << endl;

    char str5[20] = "528";
    char str6[20] = "45.5";

    long int x = strtol(str5, NULL, 10);
    cout << "For long int " << x << endl;

    float y = strtof(str6, NULL);
    cout << "for float " << y << endl;

    // tokeniser
    char str7[20] = "x=4;y=5;z=2"; // value pair string
    char *token = strtok(str7, ";");

    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, ";");
    }
}

void stringClass()
{
    /*
    string name;
    cout<<"Enter name: ";
    //cin>>name;
    getline(cin,name);
    cout<<"hello "<<name;
    */

    // functions on string
    string s1 = "teacher ";

    cout << "length is: " << s1.length() << endl;     // length
    cout << "size is: " << s1.size() << endl;         // size
    cout << "Capacity is: " << s1.capacity() << endl; // capacity
    cout << "max size is: " << s1.max_size() << endl; // max size
    s1.resize(50);                                    // resize
    cout << "Capacity is: " << s1.capacity() << endl;
    // s1.clear();
    if (s1.empty()) // to check if empty
    {
        cout << "String is empty";
    }
    else
    {
        cout << "String is: " << s1;
    }

    // cout << "\n String is: " << s1;

    string s2 = "Programming";
    cout << "string " << s2 << endl;                                     // display
    cout << "Append " << s2.append("A") << endl;                         // append
    cout << "insert " << s2.insert(3, "name") << endl;                   // insert
    cout << "insert with limit " << s2.insert(5, "language", 2) << endl; // insert with limited letters
    cout << "replace " << s2.replace(3, 3, "name") << endl;              // replace
    // cout << "erase " << s2.erase() << endl;
    s2.push_back('B');
    cout << "push " << s2 << endl; // add character at end
    s2.pop_back();
    cout << "pop " << s2 << endl; // delete element from end
    // s1.swap(s2); //to swap two string
    cout << "1st " << s1 << "  2nd " << s2 << endl;

    string s3 = "Language";
    char s5[10];
    s3.copy(s5, s3.length()); // to copy a string as a character arraay string
    cout << "copy in array string: " << s5;
    string name = "Vishal";
    char n[20];

    name.copy(n, 3); // copy a string
    cout << n;

    string city = "Nashik";
    cout << city.find('a'); // find occurence of a character in a string

    string strr1 = "Programming";
    string strr2 = " language";

    cout << "find " << strr1.find("gram") << endl;               // used to find the occurence of string or a character...returns index
    cout << "find from right " << strr1.rfind("m") << endl;      // used to find the occurence of string or a character from right...returns index
    cout << "from start " << strr1.find_first_of("in") << endl;  // find occurence of a letter or a string from left in main string
    cout << "From last " << strr1.find_last_of("in") << endl;    // find occurence of a letter or a string from right in main string
    cout << "Returns substring: " << strr1.substr(4, 2) << endl; // to extract a substring from a main string
    cout << "For comparison " << strr1.compare(strr2) << endl;   // to compare two strings
    cout << "returns first element " << strr1.front() << endl;   // to get the element from front
    cout << "returns last element: " << strr1.back() << endl;    // to get the element from back

    string strr3, strr4;
    strr3 = strr1 + strr2; // + operator used
    cout << "added strings: " << strr3 << endl;
    strr4 = strr3; // = operator
    cout << "assigned using assignment operator: " << strr4;
}

void str_iteration()
{
    string str = "programming";
    string::iterator it;
    for (it = str.begin(); it != str.end(); it++)
    {
        //*it=*it-32;
        cout << *it;
    }
    cout << endl;
    // for reverse
    string::reverse_iterator rit;
    string str2 = "language";
    for (rit = str2.rbegin(); rit != str2.rend(); rit++)
    {
        cout << *rit;
    }
    cout << endl;
    // using only for
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i];
        count++;
    }
    cout << "\nlength " << count << endl;

    string S = "WELCoME";
    // string::iterator i;
    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] >= 65 && S[i] <= 90)
        {
            S[i] = S[i] + 32;
        }
    }
    cout << S << endl;

    string S1 = "WeLcOmE5";
    for (int i = 0; S1[i] != '\0'; i++)
    {
        if (S1[i] >= 97 && S1[i] <= 123)
        {
            S1[i] = S1[i] - 32;
        }
    }
    cout << S1 << endl;

    // to count vowels and consonants in a string
    string vow = "how many WOrds";
    int vowels = 0, conso = 0, space = 0;
    for (int i = 0; vow[i] != '\0'; i++)
    {
        if (vow[i] == 'A' || vow[i] == 'E' || vow[i] == 'I' || vow[i] == 'O' || vow[i] == 'U' || vow[i] == 'a' || vow[i] == 'e' || vow[i] == 'i' || vow[i] == 'o' || vow[i] == 'u')
            vowels++;
        else if (vow[i] = ' ')
            space++;
        else
            conso++;
    }
    cout << "vowels no is: " << vowels << "\nword count: " << space + 1 << "\nconsonant count: " << conso << endl;
}

void string_practice()
{
    string str = "how Many Words";
    int vowel = 0, consonant = 0, space = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        else
            consonant++;
    }
    cout << "vowels are: " << vowel << endl;
    cout << "consonants are: " << consonant << endl;
    cout << "words are: " << space + 1;
}

void palindrome_string()
{
    string pal = "MAdam";
    string rev;

    for (int i = 0; pal[i] != '\0'; i++)
    {
        if (pal[i] >= 65 && pal[i] <= 90)
        {
            pal[i] = pal[i] + 32;
        }
        
    }

    cout << pal << endl;
    int len = (int)pal.length();
    rev.resize(len);

    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        rev[j] = pal[i];
    }
    // cout<<rev;
    if (pal.compare(rev) == 0)
    {
        cout << "palndrome";
    }
    else
        cout << "not a palindrome";
}

void username()
{
    string email = "vishalchaudhari7800@gmail.com";
    string uname;
    int i =email.find('@');
    uname = email.substr(0,i);
    cout<<"username is: "<<uname<<endl;

    //validation
    /*for(int i=0;email[i] != '\0';i++)
    {
        if(email[i] == '0' ||email[i] == '1' ||email[i] == '2' ||email[i] == '3' ||email[i] == '4' ||email[i] == '5' ||email[i] == '6' ||email[i] == '7' ||email[i] == '8' ||email[i] == '9' ||email[i] == '_' ||email[i] == '@' ||email[i] == '.' ||
        email[i] == 'a' ||email[i] == 'b' ||email[i] == 'c' ||email[i] == 'd' ||email[i] == 'e' ||email[i] == 'f' ||email[i] == 'g' ||email[i] == 'h' ||email[i] == 'i' ||email[i] == 'j' ||email[i] == 'k' ||email[i] == 'l' ||email[i] == 'm'|| email[i] == 'n' ||email[i] == 'o' ||email[i] == 'p' ||email[i] == 'q' ||email[i] == 'r' ||email[i] == 's' ||email[i] == 't' ||email[i] == 'u' ||email[i] == 'v' ||email[i] == 'w' ||email[i] == 'x' ||email[i] == 'y' ||email[i] == 'z' ||
        email[i] == 'A' ||email[i] == 'B' ||email[i] == 'C' ||email[i] == 'D' ||email[i] == 'E' ||email[i] == 'F' ||email[i] == 'G' ||email[i] == 'H' ||email[i] == 'I' ||email[i] == 'J' ||email[i] == 'K' ||email[i] == 'L' ||email[i] == 'M'|| email[i] == 'N' ||email[i] == 'O' ||email[i] == 'P' ||email[i] == 'Q' ||email[i] == 'R' ||email[i] == 'S' ||email[i] == 'T' ||email[i] == 'U' ||email[i] == 'V' ||email[i] == 'W' ||email[i] == 'X' ||email[i] == 'Y' ||email[i] == 'Z' )
        {
          cout<<"its valid."<<endl  ;
        }
        else
        cout<<"invalid.";
    }*/
    }

int main()
{
     username();
    //palindrome_string();
    // string_practice();
    // str_iteration();
    //  stringClass();
    //  stringFunc();
    //  sringss();
    //   pointers();
    //   looops();
    //   sum_of_N();
    //   prime();
    //    factors();
    //    do_while();
       operations();
    //    while_loop();
    //    shortC();
    //    min();
    //  condition();
    return 0;
}