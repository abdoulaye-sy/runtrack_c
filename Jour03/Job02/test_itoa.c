#include <unistd.h>
#include <stdlib.h>

// Prototype de la fonction que tu as écrite dans my_itoa.c
char *my_itoa(int n);

// Affiche une string avec write (car pas le droit à printf)
void my_putstr(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        write(1, &s[i], 1);
        i++;
    }
}

int main()
{
    int nb = 1234; // nombre à tester
    char *str = my_itoa(nb); // conversion int → string

    my_putstr(str); // affichage du résultat
    write(1, "\n", 1); // retour à la ligne

    free(str); // libère la mémoire allouée dans my_itoa
    return 0;
}
