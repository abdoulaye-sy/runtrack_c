#include <stdlib.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str)
{
    int i = 0, words = 0;
    while (str[i] != '\0')
    {
        if (!is_space(str[i]) && (i == 0 || is_space(str[i - 1])))
            words++;
        i++;
    }
    return words;
}

char *copy_word(char *str, int start, int end)
{
    int len = end - start;
    char *word = malloc(len + 1);
    int i = 0;
    if (!word)
        return NULL;
    while (i < len)
    {
        word[i] = str[start + i];
        i++;
    }
    word[i] = '\0';
    return word;
}

char **split(char *str)
{
    int total_words = count_words(str);
    char **array = malloc((total_words + 1) * sizeof(char *));
    int i = 0, index = 0, start = -1;

    if (!array)
        return NULL;

    while (str[i] != '\0')
    {
        if (!is_space(str[i]) && start == -1)
            start = i;

        if ((is_space(str[i]) || str[i + 1] == '\0') && start != -1)
        {
            int end = is_space(str[i]) ? i : i + 1;
            array[index] = copy_word(str, start, end);
            if (!array[index])
                return NULL;
            index++;
            start = -1;
        }
        i++;
    }

    array[index] = NULL;
    return array;
}
