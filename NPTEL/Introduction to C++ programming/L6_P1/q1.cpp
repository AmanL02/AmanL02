#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Integer\n";
    cin >> n;
    if (n>0)
    {
        cout << "" << sqrt(n);
    }
    if (n<0)
    {
        n=-1*n;
        cout <<  "" << sqrt(n) << "i";
    }
    

    return 0;

}