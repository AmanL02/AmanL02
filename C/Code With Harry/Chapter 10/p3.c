#include <stdio.h>
int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("b.text", "r");
    ptr2 = fopen("c.txt", "w");
    char c = fgetc(ptr1);
    while (c != EOF)
    {
        fputc(c, ptr2);
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
    fclose(ptr2);
    fclose(ptr1);
    return 0;
}