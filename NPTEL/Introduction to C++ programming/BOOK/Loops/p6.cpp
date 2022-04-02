#include <iostream>
using namespace std;
int main()
{
    int n,r;
    cout << "Enter a number\n";
    cin >> n;
    do
    {
        r=n%10;
        cout << r;
        n = n/10; 
    } while (n);
}