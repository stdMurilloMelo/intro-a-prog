#include <stdio.h>

int main()
{
    int n;
    int i, j, soma = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d*%d*%d = %d", i, i, i, soma);

        for (j = 1; j < i; j++)
        {
            soma += 2;
            printf("+%d", soma);
        }
        soma += 2;
        printf("\n");
    }
}