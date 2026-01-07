#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Fonction pour trim les espaces, tabulations et retours à la ligne
char *trim(char *s)
{
    int start = 0;
    int end = 0;

    // compter la longueur
    while (s[end] != '\0') end++;

    // trim à gauche
    while (isspace(s[start])) start++;

    // trim à droite
    while (end > start && isspace(s[end - 1])) end--;

    // allouer mémoire pour la nouvelle string
    int len = end - start;
    char *res = malloc(len + 1);
    if (!res) return NULL;

    for (int i = 0; i < len; i++)
        res[i] = s[start + i];
    res[len] = '\0';
    return res;
}

// Comparateur pour qsort
int cmpstr(const void *a, const void *b)
{
    return strcmp(*(char**)a, *(char**)b);
}

int main(int argc, char **argv)
{
    if (argc < 2) return 0; // pas d'arguments

    // tableau de strings trimées
    char **tab = malloc((argc - 1) * sizeof(char*));
    for (int i = 1; i < argc; i++)
    {
        tab[i - 1] = trim(argv[i]);
    }

    // trier
    qsort(tab, argc - 1, sizeof(char*), cmpstr);

    // afficher sur une seule ligne avec un espace
    for (int i = 0; i < argc - 1; i++)
    {
        printf("%s", tab[i]);
        if (i < argc - 2) printf(" ");
        free(tab[i]); // libérer chaque string
    }
    free(tab); // libérer le tableau
    printf("\n");

    return 0;
}
