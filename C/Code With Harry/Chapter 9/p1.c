#include <stdio.h>
struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1,v2;
    v1.x=5;
    v1.y=9;
    printf("X dimension of vector 1 is %d and Y is %d\n", v1.x,v1.y);
    v2.x=89;
    v2.y=34;
    printf("X dimension of vector 2 is %d and Y is %d\n", v2.x,v2.y);
}