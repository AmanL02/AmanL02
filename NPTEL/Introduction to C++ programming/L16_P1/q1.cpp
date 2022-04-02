#include <iostream>
using namespace std;
int main()
{
    int q[4]={11,12,13,14}, r=2;
    cout << q << " "<< r <<  " "<< &r << endl;
    cout << q[0] << " " << &q[0] << endl;
}