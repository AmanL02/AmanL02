#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr=&arr[0];
    printf("Value of 3rd Element is %d\n", *(ptr+2));   
    return 0;
}