#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter Values of A,B,C\n";
    cin >> a >>b >>c;

    if (a>b && a>c)
    {
        if (b>c)
        {
            cout << c << b <<a;   
        }
        else
        {
            cout << c << b << a;
        }
    }
    if (b>a && b>c)
    {
        if (a>c)
        {
            cout << c << a << b;   
        }
        else
        {
            cout << a << c << b;
        }
    }
    if (c>b && c>a)
    {
        if (b>a)
        {
            cout << a << b <<c;   
        }
        else
        {
            cout << b << a << c;
        }
    }
}