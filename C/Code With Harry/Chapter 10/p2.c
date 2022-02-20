#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number u want the Table of\n");
    scanf("%d", &num);
    FILE *ptr;
    ptr=fopen("multiply.txt","w");
    for (int i = 0; i < 10; i++)
    {
       fprintf(ptr, "%d X %d = %d\n", num, i+1, num*(i+1)); 
    }
    fclose(ptr);
    return 0;
}