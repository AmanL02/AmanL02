#include <stdio.h>
int main()
{
    int x,r,l=0,n[l],a,b;
    printf("Enter a number\n");
    scanf("%d", &x);
    do
    {
        x=x/10;
        l++;
    } while (x<0);
    l--;
    for (int i = 0; i < l; i++)
    {
        r=x%10;
        n[i]=r;
        x=x/10;
    }
    for (int i = 0; i < l; i++)
    {
        n[0+i]=n[l-1];
        l--;
        // if (n[0+i]==n[l-1])
        // {
        //    n[l/2]= n[l-1]>n[0+i]?n[l-1]:n[0+i];
        //    n[(l/2)-1]=n[l/2];
        // }
        
    }
    for (int i = 0; i < l; i++)
    {
        printf("%d", n[i]);
    }
    
}