#include <stdio.h>

#define MAX_DIM 6

int soma_ampulheta(int i, int j, int m[][6])
{
    int soma = m[i][j] + m[i][j + 1] + m[i][j + 2] + m[i + 1][j + 1] + m[i + 2][j] + m[i + 2][j + 1] + m[i + 2][j + 2];
    return soma;
}

int main(int argc, char const *argv[])
{
    int matriz[MAX_DIM][MAX_DIM], maior = -100, soma;
    int i, j;

    for (i = 0; i < MAX_DIM; i++)
    {
        for (j = 0; j < MAX_DIM; j++)
            scanf("%d", &matriz[i][j]);
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            soma = soma_ampulheta(i,j,matriz);
            if (soma>maior)
                maior = soma;            
        }
    }

    printf("%d\n", maior);

    return 0;
}
