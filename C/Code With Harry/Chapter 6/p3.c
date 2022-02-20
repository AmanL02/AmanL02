#include <stdio.h>
void sumavg(int x, int y, int *sum,int *avg)
{
    *sum = x + y;
    *avg = (x + y) / 2;
}
int main()
{
    int a = 7, b = 3, sum, avg;
    sumavg(a, b, &sum, &avg);
    printf("Sum is %d\n", sum);
    printf("Average is %d\n", avg);
}