#include <unistd.h>

int my_atoi(char *str);
void my_putchar(char c) { write(1, &c, 1); }

int main()
{
    int n = my_atoi("-123");
    if (n < 0) my_putchar('-');
    my_putchar('\n');
    return 0;
}
