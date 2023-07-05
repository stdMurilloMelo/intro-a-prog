#include <stdio.h>

#define MAX 10

void printCamadaExterior(int lin_start, int col_start, int num_lin, int num_col, int matriz[][MAX])
{
    int i, j;
    // direita
    for (j = col_start; j < num_col + col_start; j++)
        printf("%d ", matriz[lin_start][j]);
    // baixo
    for (i = lin_start + 1; i < num_lin + lin_start; i++)
        printf("%d ", matriz[i][j - 1]);
    // esquerda
    if ((j - 2 >= col_start) && (i - 1 > lin_start))
        for (j = j - 2; j >= col_start; j--)
            printf("%d ", matriz[i - 1][j]);
    // cima
    if ((i - 2 != lin_start) && (j + 1 == col_start))
        for (i = i - 2; i > lin_start; i--)
            printf("%d ", matriz[i][j + 1]);
}

void printMatrizEspiral(int num_lin, int num_col, int matriz[][MAX])
{
    int lin_start = 0, col_start = 0;

    while (num_col > 0 && num_lin > 0)
    {
        printCamadaExterior(lin_start, col_start, num_lin, num_col, matriz);
        lin_start++;
        col_start++;
        num_lin = num_lin - 2;
        num_col = num_col - 2;
    }

    printf("\n");
}

int main(int argc, char const *argv[])
{
    int num_lin, num_col, matriz[MAX][MAX];

    scanf("%d %d", &num_lin, &num_col);

    if ((num_lin <= 0 || num_lin > 10) || (num_col <= 0 || num_col > 10))
    {
        printf("Dimensao invalida\n");
        return 0;
    }

    int i, j;
    for (i = 0; i < num_lin; i++)
        for (j = 0; j < num_col; j++)
            scanf("%d", &matriz[i][j]);

    printMatrizEspiral(num_lin, num_col, matriz);

    return 0;
}
