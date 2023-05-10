#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *seq;
    int maior = 0, temp = 0;

    scanf("%d", &n);

    seq = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &seq[i]);

    for (i = 0; i < n; i++)
    {
        if (seq[i] < seq[i + 1])
        {
            ++maior;
        }
        else
        {
            if (temp < maior)
            {
                temp = maior;
                maior = 0;
            }
        }
    }

    printf("O comprimento do segmento crescente maximo e: %d\n", temp + 1);

    return 0;
}