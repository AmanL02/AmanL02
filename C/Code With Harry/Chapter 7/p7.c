#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of which u want table of\n");
    scanf("%d", &n);
    // int arr[3][10];
    for (int j = 0; j <11; j++)
    {
        int k = n * j;
        printf("Table is %d\n", k);
        // scanf("%d",&arr[i][j]);
    }
    return 0;
}