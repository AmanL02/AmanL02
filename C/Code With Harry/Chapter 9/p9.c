#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
} date;
void display (date d)
{
    printf("Your Date is : %d/%d/%d\n", d.date, d.month,d.year);
}
int comp(date d1, date d2)
{
    if (d1.year>d2.year)
    {
        return 1;
    }
    if (d1.year<d2.year)
    {
        return -1;
    }
    if (d1.month>d2.month)
    {
        return 1;
    }
    if (d1.month<d2.month)
    {
        return -1;
    }
    if (d1.date>d2.date)
    {
        return 1;
    }
    if (d1.date<d2.date)
    {
        return -1;
    }
    return 0;
}

int main()
{
    date d1 = {28, 5, 2003};
    date d2 = {28, 5, 2003};
    display (d1);
    display (d2);
    int a=comp (d1,d2);
    printf("Date comparision result is : %d\n", a);
    return 0;
}