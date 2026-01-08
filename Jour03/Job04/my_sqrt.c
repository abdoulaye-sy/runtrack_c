// Fonction my_sqrt : retourne la racine carrée si elle est entière, sinon 0
int my_sqrt(int n)
{
    for (int i = 1; i * i <= n; i++) // on teste i² jusqu'à dépasser n
    {
        if (i * i == n) // si i² = n → racine entière trouvée
            return i;
    }
    return 0; // sinon, pas de racine carrée entière
}
