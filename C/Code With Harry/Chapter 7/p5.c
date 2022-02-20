#include <stdio.h>
void reverse(int *, int);
int main()
{
    int mx[5];
    // int *ptr;
    // ptr=&mx[0];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter any 5 num\n");
        scanf("%d", &mx[i]);
    }
    reverse(mx, 5);
     for(int i=0; i<5; i++){
         printf("The value of %d element is: %d\n", i+1, mx[i]);
    }
    return 0;
}
void reverse(int *mx, int n)
{
    for (int i = 0; i < n/2; i++)
    {
      int temp;
      temp=mx[i];
      mx[i]=mx[n-i-1];
      mx[n-i-1]=temp;  
    }
    
}