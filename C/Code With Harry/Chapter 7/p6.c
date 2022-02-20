#include <stdio.h>
int positive(int *, int);
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter any 5 numbers\n");
        scanf("%d", &arr[i]);
    }
    int y = positive(arr, 5);
    printf("Your positive numbers are %d\n", y);
    return 0;
}
int positive(int *arr, int n)
{
    int x;
    for (int i = 0; i < n; i++)
    {
        x = arr[i] > 0;
        x++;
    }
    return x;
}