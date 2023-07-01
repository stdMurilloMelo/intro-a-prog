#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int qnt_same(int apostados[], int sorteados[], int size)
{
    int i, j, count = 0;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (apostados[i] == sorteados[j])
            {
                count++;
            }
        }
    }

    return count;
}

int main(int argc, char const *argv[])
{
    int sorteados[6], apostados[6], num_apostas,
        qnt_acertos, qnt_senas = 0, qnt_quinas = 0, qnt_quadras = 0, i, j;

    for (i = 0; i < 6; i++)
        scanf("%d", &sorteados[i]);

    scanf("%d", &num_apostas);

    for (i = 0; i < num_apostas; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &apostados[j]);
        }

        qnt_acertos = qnt_same(apostados, sorteados, 6);

        switch (qnt_acertos)
        {
        case 6:
            qnt_senas++;
            break;

        case 5:
            qnt_quinas++;
            break;

        case 4:
            qnt_quadras++;
            break;

        default:
            break;
        }
    }

    if (!qnt_senas)
    {
        printf("Nao houve acertador para sena\n");
    }
    else
    {
        printf("Houve %d acertador(es) da sena\n", qnt_senas);
    }

    if (!qnt_quinas)
    {
        printf("Nao houve acertador para quina\n");
    }
    else
    {
        printf("Houve %d acertador(es) da quina\n", qnt_quinas);
    }

    if (!qnt_quadras)
    {
        printf("Nao houve acertador para quadra\n");
    }
    else
    {
        printf("Houve %d acertador(es) da quadra\n", qnt_quadras);
    }

    return 0;
}
