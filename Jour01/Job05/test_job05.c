#include <stdio.h>
#include <stdlib.h>
#include "my_strdup.c"

int main(void)
{
    char *str = "LaPlateforme";
    char *dup = my_strdup(str);

    if (dup != NULL)
    {
        printf("Original : %s\n", str);
        printf("Copie    : %s\n", dup);
        free(dup); // on libère la mémoire
    }
    return 0;
}
