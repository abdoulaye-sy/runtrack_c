// sort.c : tri ASCII (bubble sort)
#include <stdio.h>

// fonction pour comparer deux strings
int my_strcmp(char *a, char *b) {
    int i = 0;
    while (a[i] && b[i] && a[i] == b[i]) i++;
    return a[i] - b[i];
}

// fonction pour trier le tableau de strings
void sort(char **tab) {
    for (int i = 0; tab[i]; i++) {
        for (int j = 0; tab[j+1]; j++) {
            if (my_strcmp(tab[j], tab[j+1]) > 0) {
                char *tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
    }
}
