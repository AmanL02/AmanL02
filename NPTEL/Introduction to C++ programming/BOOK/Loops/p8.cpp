#include <iostream>
using namespace std;

int main()
{
    int a,b=0,r,n;
    cout << "Enter a number\n";
    cin >> n;
    a = n;
    do
    {
        r=n%10;
        b=(b*10)+r;
        n=n/10;
    }while (n!=0);
    
    // cout<<b;
    
    if (a==b) 
    {
        cout << "Its a palindrome number";
    }
    else
    {
        cout << "Not a palindrome";
    }
    return 0;
}