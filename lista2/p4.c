#include <stdio.h>

int somaDivisores(int n)
{
    int i, soma = 1;

    printf("%d = 1", n);

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf(" + %d", i);
            soma += i;
        }
    }

    return soma;
}

int main()
{
    int n, soma;

    scanf("%d", &n);

    soma = somaDivisores(n);

    printf(" = %d", soma);

    if (soma == n)
    {
        printf(" (NUMERO PERFEITO)\n");
    }
    else
    {
        printf(" (NUMERO NAO E PERFEITO)\n");
    }

    return 0;
}
