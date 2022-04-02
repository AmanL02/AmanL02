#include <iostream>
using namespace std;
int main()
{
    int sum[10000];
    for (int i = 1; i < 10000; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i%j==0)
            {
                sum = sum+j;
            }
            
        }
        if (sum==i)
        {
            cout << i << endl;
        }
        
    }
    
}