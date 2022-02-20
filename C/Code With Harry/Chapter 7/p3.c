#include <stdio.h>
int main()
{
    int arr[10];
    // int n;
    // printf("Enter the num u want table of\n");
    // scanf("%d", n);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("5 X %d  is %d \n", i+1,arr[i]);
    }

    return 0;
}