#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    float x[n],y[n],sum =0,D;
    cout << "Enter the numbers of point\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter co-ordinates of X and Y\n";
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i <n-1; i++)
    {
        D = sqrt((x[i+1]-x[i])*(x[i+1]-x[i]) + (y[i+1]-y[i])*(y[i+1]-y[i]));
        sum=sum+D;
    }
    sum= sum+ sqrt((x[n-1]-x[0])*(x[n-1]-x[0]) + (y[n-1]-y[0])*(y[n-1]-y[0]));
    cout << sum;
}