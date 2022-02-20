#include <stdio.h>
void func(int *);
int main()
{
    int i,*j;
    j=&i;
    printf("The Address of i is %u\n", &i);
    func(j);
    return 0;
}
void func(int *j)
{
    printf("Address of i inside function is %u\n", j);
}