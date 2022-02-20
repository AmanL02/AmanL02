#include <stdio.h>
void decrypted(int *a)
{
    char *ptr=a;
    while (*ptr!='\0'  )
    {
        *ptr=*ptr-1;
        ptr++;
    }
    
}
int main()
{
    char a[]="Bnbo";
    decrypted(a);
    printf("Your Decrypted message is %s", a);
    return 0;
}