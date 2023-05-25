#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *seq;
    int maior = 1, temp = 1;

    scanf("%d", &n);

    seq = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &seq[i]);

    for (i = 0; i < n - 1; i++)
    {
        if (seq[i] < seq[i + 1])
        {
            maior = maior + 1;
        }
        else
        {
            maior = 1;
        }
        
        if (temp < maior)
        {
            temp = maior;
        }
                
    }

    printf("O comprimento do segmento crescente maximo e: %d\n", temp);

    return 0;
}