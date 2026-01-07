// swap.c
// Cette fonction échange (swap) les valeurs de 2 entiers grâce aux pointeurs

void swap(int *a, int *b)
{
    int temp;  // variable temporaire pour stocker une valeur

    temp = *a; // on met la valeur pointée par a dans temp
    *a = *b;   // on met la valeur de b dans a
    *b = temp; // on remet l'ancienne valeur de a (stockée dans temp) dans b
}
