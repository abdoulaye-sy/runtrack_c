#include <stdlib.h>

char *trim(char *src)
{
    int start = 0;
    int end = 0;
    int i = 0;

    while (src[end] != '\0')
        end++;
    end--;

    while (src[start] == ' ' || src[start] == '\t' || src[start] == '\n')
        start++;

    while (end >= start && (src[end] == ' ' || src[end] == '\t' || src[end] == '\n'))
        end--;

    char *new = malloc(end - start + 2);
    if (new == NULL)
        return NULL;

    while (start <= end)
    {
        new[i] = src[start];
        i++;
        start++;
    }

    new[i] = '\0';
    return new;
}
