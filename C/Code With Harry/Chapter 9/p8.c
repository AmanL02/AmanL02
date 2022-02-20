#include <stdio.h>
#include <string.h>
struct bank
{
    char name;
    int acc;
};

int main()
{
    struct bank v1, v2, v3;
    strcpy(v1.name, "Aman");
    v1.acc=37282;
    strcpy(v2.name, "Harry");
    v2.acc=35515;
    strcpy(v3.name, "Sarthak");
    v3.acc=85547;
    printf("%s\n", v1.name);
}