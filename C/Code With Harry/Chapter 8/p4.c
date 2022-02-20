#include<stdio.h>
void slice(char *aks, int m, int n)
{
    int i=0;
    while ((i+m)<n)
    {
        aks[i]=aks[i+m];
        i++;
    }
    aks[i]='\0';
}
int main()
{
    char aks[ ]="AmanL002";
    slice(aks, 2,6);
    printf("%s", aks);
    return 0;
}