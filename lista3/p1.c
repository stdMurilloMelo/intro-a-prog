#include <stdio.h>

#define N_max 10000

int main(int argc, char const *argv[])
{
    int V[N_max];
    int N, M, num;
    int i, j;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d ", &V[i]);
    }

    scanf("%d", &M);
    for (j = 0; j < M; j++)
    {
        scanf("%d", &num);

        for (i = 0; i < N; i++)
        {
            if (V[i] == num)
            {
                printf("ACHEI\n");
                break;
            }
        }
        if (i == N)
        {
            printf("NAO ACHEI\n");
        }
    }

    return 0;
}
