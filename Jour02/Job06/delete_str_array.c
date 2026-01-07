#include <stdlib.h>

// Libère toutes les chaînes d'un tableau et le tableau lui-même
void delete_str_array(char ***tab)
{
    if (tab == NULL || *tab == NULL)
        return;

    int i = 0;
    while ((*tab)[i] != NULL)
    {
        free((*tab)[i]);  // libère chaque chaîne
        i++;
    }

    free(*tab);  // libère le tableau
    *tab = NULL; // met le pointeur à NULL
}
