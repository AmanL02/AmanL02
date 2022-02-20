#include <stdio.h>
struct vector
{
    int x;
    int y;
};
struct vector fuck(struct vector v1, struct vector v2)
{
    struct vector sum;
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    return sum;
}
int main()
{
    struct vector v1,v2,sum;
    v1.x=5;
    v1.y=9;
    printf("X dimension of vector 1 is %d and Y is %d\n", v1.x,v1.y);
    v2.x=89;
    v2.y=34;
    printf("X dimension of vector 2 is %d and Y is %d\n", v2.x,v2.y);
    sum=fuck(v1,v2);
    printf("X dimension of sum vector is %d and Y is %d\n", sum.x,sum.y);
}