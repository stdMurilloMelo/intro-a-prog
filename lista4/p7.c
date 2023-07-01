#include <stdio.h>

#define MAX 99

int print_losango(int dim, char borda, char fundo, char losango[][MAX])
{
    int i, j, lim_inf, lim_sup;

    if (dim == 1)
    {
        printf("%d\n", fundo);
        return 0;
    }

    if (dim % 2 == 0 || dim < 0 || dim > MAX)
    {
        printf("Dimensao invalida!\n");
        return 0;
    }

    // metade superior
    for (i = 0; i < dim / 2 + 1; i++)
    {
        lim_inf = dim / 2 - i;
        lim_sup = dim / 2 + i;
        for (j = 0; j < dim; j++)
        {

            if (j == lim_inf || j == lim_sup)
            {
                losango[i][j] = borda;
            }
            else if (j > lim_inf && j < lim_sup)
            {
                losango[i][j] = fundo;
            }
            else
            {
                losango[i][j] = 32;
            }
        }
    }

    // metade inferior
    for (i = dim / 2 + 1; i < dim; i++)
    {
        lim_sup--;
        lim_inf++;
        for (j = 0; j < dim; j++)
        {

            if (j == lim_inf || j == lim_sup)
            {
                losango[i][j] = borda;
            }
            else if (j > lim_inf && j < lim_sup)
            {
                losango[i][j] = fundo;
            }
            else
            {
                losango[i][j] = 32;
            }
        }
    }

    for (i = 0; i < dim; i++)
    {
        for (j = 0; j < dim; j++)
        {
            printf("%c ", losango[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
int main(int argc, char const *argv[])
{
    int dim;
    char borda, fundo, losango[MAX][MAX];
    int i, j;

    scanf("%d %c %c", &dim, &borda, &fundo);

    print_losango(dim, borda, fundo, losango);

    

    return 0;
}
