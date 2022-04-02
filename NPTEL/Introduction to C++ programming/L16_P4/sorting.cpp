#include <iostream>
using namespace std;
int index(int M[], int n)
{
    int val = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[val] < M[i])
        {
            val = i;
        }
    }
    return val;
}
void sort(int X[], int n)
{
    int y,z;
    if (n==1)
    {
        return;
    }
    y = index(X, n);
    z =X[y];
    X[y]=X[n-1];
    X[n-1]= z;
    sort(X, n-1);
}
void print(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << ' ' << endl;
    }
    
}
int main()
{
    int A[5] = {56, 82, 34, 21, 83};
    sort(A,5);
    print(A,5);
}