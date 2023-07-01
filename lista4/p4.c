#include <stdio.h>

int main(int argc, char const *argv[])
{
    int qnt_col, qnt_lin;
    int matriz[10][10];
    int i, j;

    do
    {
        scanf("%d", &qnt_lin);
    } while (qnt_lin <= 0 || qnt_lin > 10);

    do
    {
        scanf("%d", &qnt_col);
    } while (qnt_col <= 0 || qnt_col > 10);

    for (i = 0; i < qnt_lin; i++)
    {
        for (j = 0; j < qnt_col; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < qnt_lin; i++)
    {
        printf("linha %d: ", i + 1);
        for (j = 0; j < qnt_col - 1; j++)
        {
            printf("%d,", matriz[i][j]);
        }
        printf("%d\n", matriz[i][qnt_col-1]);
    }

    return 0;
}
