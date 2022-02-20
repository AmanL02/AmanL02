#include <stdio.h>

int main() 
{

    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
    int m = n*2 - 1;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            int k = i < j ? i : j;
            k = k < m-i ? k : m-i-1;
            k = k < m-j-1 ? k : m-j-1;
            printf("%d ", n-k);
        }
        printf("\n");
    }
    return 0;
}