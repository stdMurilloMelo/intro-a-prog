#include <stdio.h>

int main(int argc, char const *argv[])
{
    double matriz[2][2], det = 1;
    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }

    det = matriz[0][0]*matriz[1][1] - matriz[0][1]*matriz[1][0];

    printf("%.2lf\n", det);

    return 0;
}
