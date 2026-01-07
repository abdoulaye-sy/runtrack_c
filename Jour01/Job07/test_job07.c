#include <stdio.h>
#include <stdlib.h>
#include "trim.c"

int main(void)
{
    char *str = "   hello world \t\n";
    char *t = trim(str);
    if (t)
    {
        printf("Avant: [%s]\n", str);
        printf("Après: [%s]\n", t);
        free(t);
    }
    return 0;
}
