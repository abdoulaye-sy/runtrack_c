#include <stdio.h>
#include <stdlib.h>
#include "delete_str_array.c"  // juste pour tester ici

int main()
{
    // Créer un tableau de chaînes simple
    char **tab = malloc(3 * sizeof(char*));
    tab[0] = malloc(6);  // "hello"
    tab[1] = malloc(6);  // "world"
    tab[2] = NULL;

    // Copier les chaînes
    tab[0][0]='h';tab[0][1]='e';tab[0][2]='l';tab[0][3]='l';tab[0][4]='o';tab[0][5]='\0';
    tab[1][0]='w';tab[1][1]='o';tab[1][2]='r';tab[1][3]='l';tab[1][4]='d';tab[1][5]='\0';

    // Libérer
    delete_str_array(&tab);

    if (tab == NULL)
        printf("Tableau libéré correctement.\n");
    else
        printf("Erreur : tableau non libéré.\n");

    return 0;
}
