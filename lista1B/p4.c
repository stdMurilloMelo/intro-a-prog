#include <stdio.h>

int main()
{
    int n, i;
    double soma = 0;

    scanf("%d", &n);

    if (n < 1)
    {
        printf("Numero invalido!");
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        soma = soma + 1 / (double)i;
    }
    printf("%lf\n", soma);

    return 0;
}