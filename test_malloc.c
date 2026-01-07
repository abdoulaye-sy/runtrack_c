#include <stdlib.h>
#include <unistd.h>

// Fonction simple pour afficher 1 caractère
void my_putchar(char c) {
    write(1, &c, 1);
}

int main() {
    // j' alloue 4 octets (assez pour stocker 1 int) 
    int *p = malloc(4);

    // Si malloc échoue, on affiche X et on arrête le programme malloc reserve la memoire 
    if (p == NULL) {
        my_putchar('X');
        return 1;
    }

    // je stocke le nombre 5 dans la mémoire allouée *p utilise la memoire 
    *p = 5;

    // j' affiche la valeur 5 (conversion simple en caractère)
    my_putchar(*p + '0');
    my_putchar('\n');

    // je libère la mémoire pour éviter les fuites free(p) permet de liberer la memoire
    free(p);

    return 0;
}


