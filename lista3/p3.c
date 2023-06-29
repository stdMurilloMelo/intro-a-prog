#include <stdio.h>
#define N_max 5000

int main()
{
    int i, j, tam_vetor, vetor[N_max];

    scanf("%d", &tam_vetor);

    for (i = 0; i < tam_vetor; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (j = tam_vetor - 1; j >= 0; j--)
    {
        printf("%d ", vetor[j]);
    }

    return 0;
}
