#include <stdio.h>
 
int main()
{
 
    float coeff[2][3], y, x;
    int i,j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%f", &coeff[i][j]);
        }
    }
 
    for (i = 1; i < 3; i++)
    {
        coeff[1][i] = coeff[1][i] - coeff[0][i] * (coeff[1][0] / coeff[0][0]);
    }
    
    y = coeff[1][2] / coeff[1][1];
    x = (coeff[0][2] - coeff[0][1] * y) / coeff[0][0];
 
    printf("O VALOR DE X E = %.2f\nO VALOR DE Y E = %.2f", x, y);
 
    return 0;
}