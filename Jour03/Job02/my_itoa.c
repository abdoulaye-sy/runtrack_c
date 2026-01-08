#include <stdlib.h>

// convertit un int en string
char *my_itoa(int n)
{
    char *str = malloc(12); // on réserve de la mémoire
    int i = 0;

    if (n < 0) // si négatif
    {
        str[i] = '-';
        i++;
        n = -n;
    }

    if (n == 0) // cas 0
    {
        str[i] = '0';
        i++;
    }

    int start = i;
    while (n > 0) // convertir chiffre par chiffre
    {
        str[i] = (n % 10) + 48;
        n = n / 10;
        i++;
    }

    // inverser la string
    int end = i - 1;
    while (start < end)
    {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }

    str[i] = '\0'; // fin de string
    return str;
}
