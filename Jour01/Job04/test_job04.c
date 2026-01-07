#include <stdio.h>
#include "my_strcpy.c"

int main(void)
{
    char destination[100];
    my_strcpy(destination, "Bonjour");
    printf("%s\n", destination);
    return 0;
}
