#include <stdio.h>
#include "my_strcmp.c"

int main(void)
{
    printf("%d\n", my_strcmp("abc", "abc")); // 0
    printf("%d\n", my_strcmp("abc", "abd")); // négatif
    printf("%d\n", my_strcmp("abe", "abd")); // positif
    return 0;
}
