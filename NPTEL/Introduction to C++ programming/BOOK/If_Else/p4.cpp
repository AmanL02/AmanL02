#include <iostream>
using namespace std;
int main()
{
    int d,m,y;
    cout << "Enter your Year: ";
    cin >> y;
    cout << "Enter days";
    cin >> d;
    if (d<=30)
    {
        m=1;
    }
    if (d>30 && d<=58)
    {
        d=d-30;
        m=2;  
    }
    if (d>58 && d<=88)
    {
        d=d-58;
        m=3;  
    }
    if (d>88 && d<=118)
    {
        d=d-88;
        m=4;  
    }
    if (d>118 && d<=148)
    {
        d=d-118;
        m=5;  
    }

    cout << d << m  << y;
}