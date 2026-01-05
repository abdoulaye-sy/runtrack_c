#include <stdlib.h>

char *my_strdup(char *src)
{
    int i = 0;
    int size = 0;

    while (src[size] != '\0') // compter la taille
        size++;

    char *copy = malloc(size + 1); // allouer mémoire

    if (copy == NULL) // protection si malloc échoue
        return NULL;

    while (i < size) // copier la chaîne
    {
        copy[i] = src[i];
        i++;
    }

    copy[i] = '\0'; // ajouter fin de chaîne
    return copy;
}
