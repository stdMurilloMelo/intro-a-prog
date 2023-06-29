#include <stdio.h>

void inverte_ordem(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int vetor[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                inverte_ordem(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}

double calcularMediana(int vetor[], int n)
{
    double mediana;

    if (n % 2 == 0)
    {
        mediana = (vetor[n / 2 - 1] + vetor[n / 2]) / 2.0;
    }
    else
    {
        mediana = vetor[n / 2];
    }

    return mediana;
}

int main()
{
    int i, N;
    scanf("%d", &N);

    int vetor_amostra[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vetor_amostra[i]);
    }

    bubbleSort(vetor_amostra, N);

    double mediana = calcularMediana(vetor_amostra, N);

    printf("%.2lf\n", mediana);

    return 0;
}
