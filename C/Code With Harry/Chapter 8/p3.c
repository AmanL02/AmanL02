#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    printf("Enter your name: ");
    gets(a);
    // scanf("%s", a);
    int x=strlen(a);
    printf("Length of String is %d", x);
    return 0;
}