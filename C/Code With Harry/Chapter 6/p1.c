#include <stdio.h>
int main()
{
    int a=5;
    int *b;
    b= &a;
    printf("Value of a is %d\n", a);
    printf("Address of a is %u\n", &a);
    printf("Value of b is %d\n", b);
    printf("Address of b is %u\n", &b);
}