#include <stdio.h>
#include "my_strlen.c"

int main(void)
{
    int len = my_strlen("Hello");
    printf("Taille = %d\n", len);
    return 0;
}
