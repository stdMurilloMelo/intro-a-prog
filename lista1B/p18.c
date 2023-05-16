#include <stdio.h>

int main()
{
    int n, i, j;

    do
    {
        scanf("%d", &n);
        if (n <= 1)
        {
            printf("Fatoracao nao e possivel para o numero %d!\n", n);
        }
    } while (n < 2);

    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d = ", n);
            printf("%d", i);
            n = n / i;
            break;
        }
    }

    while (n > 1)
    {
        for (j = 2; j <= n; j++)
        {
            if (n % j == 0)
            {
                printf(" x %d", j);
                n = n / j;
                break;
            }
        }
    }

    return 0;
}
