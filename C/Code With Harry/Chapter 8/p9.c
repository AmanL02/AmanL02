#include <stdio.h>
int check(char *str, char c)
{
    char *ptr = str;
    int count=0;
    while (*ptr!='\0')
    {
        if(*ptr==c){
            count++;
        }
        ptr++;
    }
     if (count>=1)
    {
        printf("Yes Its Present");
    }
    else
    {
        printf("No its not present");
    }
}
int main()
{
    char str[] = "Delhi is very Polluted";
    check(str, 'o');
    // printf("Availability=%d", count);
    return 0;
}