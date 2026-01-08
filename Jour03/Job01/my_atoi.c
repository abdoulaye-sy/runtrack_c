// convertit une string en int
int my_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int nb = 0;

    if (str[i] == '-') // si nombre négatif
    {
        sign = -1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') // tant que c'est un chiffre
    {
        nb = nb * 10 + (str[i] - 48); // 48 = '0' en ASCII
        i++;
    }

    return nb * sign;
}
