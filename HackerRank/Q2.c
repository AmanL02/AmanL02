#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    printf("Enter ur sentence\n");
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    char *c;
    for (char *c=s; *c!=0; c++) {
    if (*c==' ') {
    *c='\n';
    }
    }
    printf("%s", s);
    return 0;
}