#include <stdlib.h>

// Fonction interne : clone une string caractère par caractère
char *str_clone(char *s)
{
    int i = 0;

    // compter la taille de la string
    while (s[i] != '\0')
        i++;

    // allouer assez de mémoire pour la copie + le \0
    char *copy = malloc(i + 1);
    if (copy == NULL)
        return NULL; // si malloc échoue on retourne NULL

    // copier chaque caractère
    for (int j = 0; j <= i; j++)
        copy[j] = s[j];

    return copy;
}

// Fonction demandée dans l’énoncé
// Elle clone un tableau de strings jusqu'à n ou jusqu'à NULL
char **array_clone(char **arr, int n)
{
    char **new_array = malloc((n + 1) * sizeof(char*));
    if (new_array == NULL)
        return NULL;

    int i = 0;

    // Copier chaque string jusqu'à n ou jusqu'à NULL
    while (i < n && arr[i] != NULL)
    {
        new_array[i] = str_clone(arr[i]);
        if (new_array[i] == NULL)
            return NULL; // si un malloc échoue on arrête tout
        i++;
    }

    new_array[i] = NULL; // terminer le tableau par NULL comme demandé
    return new_array;
}
