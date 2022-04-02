#include <stdio.h>
int main()
{
    int n, roll_no[10], sub1[10], sub2[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the Roll.No, Marks in Subject 1 and Subject 2: ");
        scanf("%d %d %d", &roll_no[i], &sub1[i], &sub2[i]);
    }
    printf("Enter Your Roll.No: ");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        if (n == -1)
        {
            break;
        }
        if (n == roll_no[i])
        {
            printf("%d Marks in Subject 1 and %d Marks in Subject 2", sub1[i], sub2[i]);
        }
    }
}