#include <unistd.h>

// Affiche un nombre entier avec write (récursif simple)
void put_nbr(int n) {
    char c;
    if (n >= 10)
        put_nbr(n / 10);   // on affiche d'abord les chiffres de gauche
    c = (n % 10) + 48;     // convertit chiffre en caractère
    write(1, &c, 1);
}

int main(int ac, char **av) {
    if (ac < 2) return 0;  // si pas d'argument → on fait rien

    int n = 0;
    int i = 0;

    // Convertit l'argument en int (positif seulement ici)
    while (av[1][i] >= '0' && av[1][i] <= '9') {
        n = n * 10 + (av[1][i] - 48);
        i++;
    }

    int res = 1;

    // Calcul de la factorielle
    for (int j = 1; j <= n; j++)
        res = res * j;

    put_nbr(res);        // affichage du résultat
    write(1, "\n", 1);   // retour ligne
    return 0;
}
