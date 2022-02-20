#include <stdio.h>
void cofac(int arr[5][5])
{
    
}
int main()
{
    int n;
    int arr[5][5];
    printf("Enter the number u want the matrix of\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter ur numbers[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    cofac(arr);
    return 0;
}