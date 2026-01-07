#include <stdio.h>
#include <ctype.h>  // pour tolower

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)  // ignorer argv[0] (nom du programme)
    {
        char *s = argv[i];
        for (int j = 0; s[j]; j++)
        {
            putchar(tolower(s[j]));  // mettre chaque caractère en minuscule
        }
        putchar('\n');  // retour à la ligne après chaque argument
    }
    return 0;
}
