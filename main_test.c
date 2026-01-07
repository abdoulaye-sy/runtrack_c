#include <stdio.h>
#include "prototypes.h"

int main(void)
{
    my_putstr("Test Runtrack C - Jour01\n");

    my_putstr("Len de 12345 = ");
    my_putnbr(my_strlen("12345"));
    my_putchar('\n');

    my_putstr("abc vs abd = ");
    my_putnbr(my_strcmp("abc", "abd"));
    my_putchar('\n');

    char *dup = my_strdup("  Salut  ");
    my_putstr("Dup = ");
    my_putstr(dup);
    my_putchar('\n');
    free(dup);

    char *t = trim("  hello  ");
    my_putstr("Trim = ");
    my_putstr(t);
    my_putchar('\n');
    free(t);

    char **sp = split("hello world fun");
    my_putstr("Split :\n");
    int i = 0;
    while (sp[i])
    {
        my_putstr("- ");
        my_putstr(sp[i]);
        my_putchar('\n');
        free(sp[i]);
        i++;
    }
    free(sp);

    return 0;
}
