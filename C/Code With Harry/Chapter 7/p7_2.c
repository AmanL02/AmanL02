#include<stdio.h>
void print(int*, int num, int n);
int main()
{
    int arr[3][10];
    print(arr[0],2,10);
     print(arr[1],7,10);
      print(arr[2],9,10);
}
void print(int *arr, int num, int n)
{
    printf("The multiplication table of %d is :\n", num);
    for (int i = 0; i < n; i++)
    {
        arr[i]=num*(i+1);
    }
     for(int i=0; i<n; i++)
    {
        printf("%dX%d = %d\n", num, i+1, arr[i]);
    }
    
}