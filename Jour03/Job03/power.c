// Fonction power : calcule a^b (a puissance b)
int power(int a, int b)
{
    int result = 1; // on commence à 1 car multiplication

    for (int i = 0; i < b; i++) // on multiplie a, b fois
    {
        result = result * a;
    }

    return result; // on retourne le résultat
}
