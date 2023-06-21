#include <stdio.h>

long int string2int(const char *str)
{
    long int result = 0;
    int sign = 1;
    int i = 0;

    // Verifica o sinal
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }

    // Converte cada dígito para inteiro e acumula o resultado
    while (str[i] != '\0')
    {
        int digit = str[i] - '0';
        result = result * 10 + digit;
        i++;
    }

    return result * sign;
}

int main()
{
    char str[129];

    while (scanf("%s", str) != EOF)
    {
        long int n = string2int(str);
        printf("%ld %ld\n", n, n * 2);
    }

    return 0;
}
