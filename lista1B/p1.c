#include <stdio.h>

int main()
{
    int num_T, i;
    
    scanf("%d", &num_T);

    double temp_F[num_T], temp_C[num_T];

    for (i = 0; i < num_T; i++)
    {
        scanf("%lf", &temp_F[i]);
    }

    for (i = 0; i < num_T; i++)
    {
        temp_C[i] = 5*(temp_F[i] - 32)/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", temp_F[i], temp_C[i]);
    }
    

    return 0;
}