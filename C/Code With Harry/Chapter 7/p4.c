#include <stdio.h>
int main()
{
    int arr[10];
    int n;
    printf("Enter the num u want table of\n");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n* (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d  is %d \n",n, i+1,arr[i]);
    }

    return 0;
}