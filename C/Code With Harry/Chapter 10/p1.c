#include <stdio.h>
int main()
{
    int a, b, c;
    FILE *ptr;
    ptr = fopen("a.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("Value of 3 integers are %d %d %d\n", a, b, c);
    return 0;
}