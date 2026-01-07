// func_to_array.c
// Applique une fonction sur toutes les chaînes d'un tableau

void func_to_array(char **tab, void (*f)(char*))
{
    for (int i = 0; tab[i]; i++)
    {
        f(tab[i]); // appliquer la fonction sur chaque string
    }
}
