#include <stdio.h>
#include <stdlib.h>
#include "split.c"

int main(void)
{
    char *str = "  hello world have fun  ";
    char **result = split(str);
    int i = 0;

    printf("Phrase : [%s]\n", str);
    printf("Mots splités :\n");

    while (result[i] != NULL)
    {
        printf("- %s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return 0;
}
