#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c,D,i;
    float x,y;
    cout << "Enter the value of a,b,c\n";
    cin >> a >> b >> c;
    D=((b*b) - (4*a*c));
    if (D>0)
    {
        x= (-b + sqrt(D))/2*a;
        y= (-b - sqrt(D))/2*a;
        cout << x;
        cout << y;
    }
    else
    {
        D= (D*(-1));
        x= ((-b + sqrt(D))/2*a);
        y= ((-b - sqrt(D))/2*a);
        cout << x << i;
        cout << y << i;
    }
}