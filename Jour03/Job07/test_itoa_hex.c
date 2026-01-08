#include <unistd.h>
#include <stdlib.h>

char *itoa_hex(int n);

void my_putstr(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        write(1, &s[i], 1);
        i++;
    }
}

int main()
{
    int n = 255; // exemple
    char *hex = itoa_hex(n);
    my_putstr(hex);
    write(1, "\n", 1);
    free(hex);
    return 0;
}
