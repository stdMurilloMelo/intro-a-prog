#include <stdio.h>

int main()
{
    int n, i, soma=1;

    scanf("%d", &n);

    printf("%d = 1", n);

    for (i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            printf(" + %d", i);
            soma += i;
        }
    }
    printf(" = %d", soma);
    if (soma == n)
    {
        printf(" (NUMERO PERFEITO)");
    }
    else
    {
        printf(" (NUMERO NAO E PERFEITO)");
    }
    
    


    return 0;
}