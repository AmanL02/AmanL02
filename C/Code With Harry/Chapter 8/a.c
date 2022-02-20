#include <stdio.h>
int main()
{
    char a[10];
    printf("Enter Your Name : ");
    gets(a);
    // scanf("%s", a);
    printf("Your name is %s", a);
    return 0;
}