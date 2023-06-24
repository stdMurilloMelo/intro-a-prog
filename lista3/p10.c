#include <stdio.h>
#include <stdlib.h>

int achar_max(int seq[], int tamanho)
{
    int max = seq[0], i;

    for (i = 0; i < tamanho; i++)
    {
        if (seq[i] > max)
        {
            max = seq[i];
        }
    }

    return max;
}

int achar_min(int seq[], int tamanho)
{
    int min = seq[0], i;

    for (i = 0; i < tamanho; i++)
    {
        if (seq[i] < min)
        {
            min = seq[i];
        }
    }

    return min;
}

int main(int argc, char const *argv[])
{
    int N, i;
    scanf("%d", &N);

    int *seq, max, min;
    seq = malloc(N * sizeof(int));

    for (i = 0; i < N; i++)
        scanf("%d", &seq[i]);

    for (i = 0; i < N; i++)
    {
        printf("%d ", seq[i]);
    }
    printf("\n");

    for (i = N - 1; i >= 0; i--)
    {
        printf("%d ", seq[i]);
    }
    printf("\n");

    printf("%d\n", achar_max(seq, N));
    printf("%d\n", achar_min(seq, N));


    return 0;
}
