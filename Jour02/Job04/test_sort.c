#include <stdio.h>
#include "sort.c"

int main() {
    char *t[] = {"zoo", "abc", "abd", "aaa", NULL};

    sort(t);

    for (int i = 0; t[i]; i++) {
        printf("%s\n", t[i]);
    }

    return 0;
}
