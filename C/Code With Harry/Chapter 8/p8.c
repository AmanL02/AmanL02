#include <stdio.h>
int occurence(char f[], char c)
{
    char *ptr = f;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char f[] = "Aman likes to play Football";
    int count = occurence(f, 'l');
    printf("Occurence = %d", count);
    return 0;
}