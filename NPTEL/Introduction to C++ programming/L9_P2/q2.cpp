#include <iostream>
using namespace std;

int main()
{
    int i,j,z[i][j];
    // cout << "Hello" <<endl;
    for (i = 1; i < 13; i++)
    {
        // cout << "Hello2" <<endl;
        for (j = i+1; j < 13; j++)
        {
            // cout << "Hello3" <<endl;
            z[i][j]=(i*i*i)+(j*j*j);
            
        }
        
    }
    cout << z[1][2] << endl;
}