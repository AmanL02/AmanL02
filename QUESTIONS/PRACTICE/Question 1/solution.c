#include <stdio.h>
// #include <string.h>
int main()
{
    int a,b;
    printf("Enter the size of first set\n");
    scanf("%d", &a);
    printf("Enter the size of second set\n");
    scanf("%d", &b);

    int set1[a], set2[b];
    printf("Enter the elements of first set\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &set1[i]);
    }
    printf("Enter the elements of second set\n");
    for (int j = 0; j < b; j++)
    {
        scanf("%d", &set2[j]);
    }
    
    int c =a+b;
    int set3[c];
    for (int k = 0; k < c; k++)
    {
        scanf("%d", &set3[k]);
    }
    for (int k = 0; k < c; k++)
    {
        printf("%d\t",set3[k]);
    }
    
}