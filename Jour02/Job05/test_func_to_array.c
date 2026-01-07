#include <stdio.h>
#include "func_to_array.h"

// fonction exemple qui affiche la string et un espace
void print_str(char *s)
{
    printf("%s ", s);
}

int main()
{
    char *tab[] = {"hello", "world", "test", NULL};

    func_to_array(tab, print_str);
    printf("\n"); // retour à la ligne après l'affichage

    return 0;
}

