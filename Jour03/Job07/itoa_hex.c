#include <stdlib.h>

// convertit un entier en string hexadécimale (majuscule)
char *itoa_hex(int n)
{
    char *hex = "0123456789ABCDEF"; // table hex
    char *str = malloc(9);          // 8 chiffres max + '\0'
    int i = 0;

    if (n == 0) // cas 0
    {
        str[i++] = '0';
    }

    while (n > 0) // conversion
    {
        str[i++] = hex[n % 16];
        n = n / 16;
    }

    // inverser la chaîne
    int start = 0, end = i - 1;
    while (start < end)
    {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }

    str[i] = '\0'; // fin de chaîne
    return str;
}
