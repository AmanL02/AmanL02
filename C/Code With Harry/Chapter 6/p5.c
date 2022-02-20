#include<stdio.h>
int main()
{
    int i=5,*j,**k;
    j=&i;
    k=&j;
    printf("Value of i is %d\n", **k);
    return 0;
}