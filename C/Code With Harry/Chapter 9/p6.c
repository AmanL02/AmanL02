#include <stdio.h>
struct complex
{
    int real;
    int img;
};
void display(struct complex c)
{
    printf("Your Complex number is %d+i%d\n", c.real, c.img);
}
int main()
{
    struct complex cum[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part of complex num %d\n", i+1);
        scanf("%d", &cum[i].real);
        printf("Enter the img part of complex num %d\n", i+1);
        scanf("%d", &cum[i].img);
    }
    for (int i = 0; i < 5; i++)
    {
        display(cum[i]);
    }

    return 0;
}