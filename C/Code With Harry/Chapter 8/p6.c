#include <stdio.h>
void encrypt(int *a)
{
    char *ptr=a;
    while (*ptr!='\0'  )
    {
        *ptr=*ptr+1;
        ptr++;
    }
    
}
int main()
{
    char a[]="Aman";
    encrypt(a);
    printf("Your Encrypted message is %s", a);
    return 0;
}