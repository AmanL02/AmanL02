#include <stdio.h>
int main()
{
    int c, n, x[n], y[n];
    printf("Enter the total no.of points: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the X Co-ordinate: ");
        scanf("%d", &x[i]);
        printf("Enter the Y Co-ordinate: ");
        scanf("%d", &y[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                c = (x[i] * (y[j] - y[k]) + x[j] * (y[k] - y[i]) + x[k] * (y[i] - y[j]));
                if (c == 0)
                {
                    printf("(%d,%d) and (%d,%d) and (%d,%d) are collinear points", x[i], y[i], x[j], y[j], x[k], y[k]);
                }
            }
        }
    }
}