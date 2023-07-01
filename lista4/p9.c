#include <stdio.h>

#define MAX_N 100
#define MAX_M 100

int main()
{
    int matriz[MAX_N][MAX_M];
    int n, m;
    int i, j;
    int menor = 1000, maior = 0;
    int countMenor = 0, countMaior = 0;

    // leitura das dimensoes da matriz
    scanf("%d %d", &n, &m);

    // leitura dos elementos da matriz
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &matriz[i][j]);

            // verifica se o elemento atual eh o novo menor
            if (matriz[i][j] < menor)
                menor = matriz[i][j];

            // verifica se o elemento atual eh o novo maior
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
        }
    }

    // contagem do numero de ocorrencias do menor e do maior valor
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (matriz[i][j] == menor)
                countMenor++;
            if (matriz[i][j] == maior)
                countMaior++;
        }
    }

    // calculo da porcentagem de ocorrencia do menor e do maior valor
    double percMenor = (double)countMenor / (n * m) * 100;
    double percMaior = (double)countMaior / (n * m) * 100;

    // impressao dos resultados
    printf("%d %.2lf%%\n", menor, percMenor);
    printf("%d %.2lf%%\n", maior, percMaior);

    return 0;
}
