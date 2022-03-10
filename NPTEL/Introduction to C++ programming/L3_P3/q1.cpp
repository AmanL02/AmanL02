#include <iostream>
int main()
{
    int i=1,j=2,k=3;
    i=j;
    j=k;
    k=i;
    k++;
    i--;
    std :: cout << k;
    std :: cout << i;
}