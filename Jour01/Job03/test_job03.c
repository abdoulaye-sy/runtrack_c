#include <stdio.h>
#include "char_is_digit.c"
#include "str_is_digit.c"

int main(void)
{
    printf("%d\n", char_is_digit('5'));     // doit afficher 1
    printf("%d\n", char_is_digit('A'));     // doit afficher 0
    printf("%d\n", str_is_digit("12345"));  // doit afficher 1
    printf("%d\n", str_is_digit("12a45"));  // doit afficher 0
    return 0;
}
