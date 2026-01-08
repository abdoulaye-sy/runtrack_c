#include <unistd.h>

// Prototype de la fonction
int power(int a, int b);

// Affiche un nombre avec write (pas printf autorisé)
void put_nbr(int n)
{
    char c;
    if (n >= 10)
        put_nbr(n / 10);
    c = (n % 10) + 48;
    write(1, &c, 1);
}

int main()
{
    int nb = power(2, 3); // 2^3 = 8
    put_nbr(nb);          // on affiche 8
    write(1, "\n", 1);    // retour à la ligne
    return 0;
}
