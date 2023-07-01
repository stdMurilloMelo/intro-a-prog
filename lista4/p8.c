#include <stdio.h>

#define MAX 500

int somaElementosMatriz(int n, int matriz[][MAX])
{
    int i, j, soma = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            soma += matriz[i][j];
    }

    return soma;
}

int ehPermutacao(int matriz[MAX][MAX], int n, int *soma)
{
    int i, j, elem, l, c;

    *soma = somaElementosMatriz(n, matriz);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            elem = matriz[i][j];

            // elemento diferente de 0 ou 1
            if (elem != 0 && elem != 1)
                return 0;

            // elemento igual a 1
            if (elem)
            {
                // verifica se ha algum elemento diferente de 0 na linha
                for (c = j + 1; c < n; c++)
                    if (matriz[i][c] != 0)
                        return 0;

                // verifica se ha algum elemento diferente de 0 na coluna
                for (l = i + 1; l < n; l++)
                    if (matriz[l][j] != 0)
                        return 0;
            }
        }
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    int ordem, soma, matriz[MAX][MAX], ehPrmtc;
    int i, j;

    scanf("%d", &ordem);

    for (i = 0; i < ordem; i++)
        for (j = 0; j < ordem; j++)
            scanf("%d", &matriz[i][j]);

    printf("%d\n", ordem);

    ehPrmtc = ehPermutacao(matriz, ordem, &soma);

    if (ehPrmtc)
        printf("PERMUTACAO\n");
    else
        printf("NAO EH PERMUTACAO\n");

    printf("%d\n", soma);

    return 0;
}
