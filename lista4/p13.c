#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int matrix[6][6] = {
        {0, 63, 210, 190, -1, 190},
        {63, 0, 160, 150, 95, 10},
        {210, 160, 0, 10, 1, 10},
        {190, 150, 10, 0, 10, 20},
        {10, 95, 7, 21, 0, 80},
        {190, 2, -1, 41, 80, 0}};

    int num_cidades, *rota, tam_rota = 0, i, dist;

    scanf("%d", &num_cidades);

    rota = malloc(num_cidades * sizeof(int));
    for (i = 0; i < num_cidades; i++)
        scanf("%d", &rota[i]);

    for (i = 0; i < num_cidades - 1; i++)
    {
        dist = matrix[rota[i]][rota[i + 1]];
        if (dist < 0)
        {
            printf("rota invalida!\n");
            return 0;
        }

        tam_rota += dist;
    }

    printf("%d", tam_rota);

    return 0;
}
