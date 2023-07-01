#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ord, i, j;

    scanf("%d", &ord);

    int **matriz = (int **)malloc(ord * sizeof(int *));
    for (i = 0; i < ord; i++)
    {
        *(matriz + i) = (int *)malloc(ord * sizeof(int));
    }

    for (i = 0; i < ord; i++)
    {
        for (j = 0; j < ord; j++)
        {
            scanf("%d", &*(*(matriz + i) + j));
        }
    }

    for (i = 0; i < ord; i++)
    {
        printf("%d\n", *(*(matriz + i) + (ord - 1) - i));
    }

    for (i = 0; i < ord; i++)
    {
        free(*(matriz + i));
    }
    free(matriz);

    return 0;
}
