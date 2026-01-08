#include <unistd.h>

// Affiche un nombre avec write
void put_nbr(int n) {
    char c;
    if (n >= 10)
        put_nbr(n / 10);  // affiche chiffres de gauche
    c = (n % 10) + 48;
    write(1, &c, 1);
}

int main(int ac, char **av) {
    if (ac < 2) return 0; // rien si pas d'argument

    int n = 0;
    int i = 0;

    // Convertit l'argument en int
    while (av[1][i] >= '0' && av[1][i] <= '9') {
        n = n * 10 + (av[1][i] - 48);
        i++;
    }

    int a = 0, b = 1, c = 0;

    for (int j = 2; j <= n; j++) {
        c = a + b;
        a = b;
        b = c;
    }

    if (n == 0) c = 0;
    if (n == 1) c = 1;

    put_nbr(c);
    write(1, "\n", 1);
    return 0;
}
