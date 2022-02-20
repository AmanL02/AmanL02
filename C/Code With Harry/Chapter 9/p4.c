#include<stdio.h>
struct test 
{
    int code;
    int roll;
};
int main()
{
    struct test *ptr, F;
    ptr=&(F.code);
    F.code=5;
    printf("%d\n", (*ptr).code);
    // ptr->roll;
    // F.roll=10;
    printf("%d\n", ptr->code);
}