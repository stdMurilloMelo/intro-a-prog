#include <stdio.h>

double coseno(double ang_rad, int num_termos)
{
    double resultado = 1.0;
    double numerador = 1.0;
    double denominador = 1.0;

    for (int i = 1; i <= num_termos; i++)
    {
        numerador = -numerador * ang_rad * ang_rad;
        denominador = denominador * (2 * i - 1) * (2 * i);
        resultado += numerador / denominador;
    }

    return resultado;
}

int main()
{
    double ang_rad;
    int num_termos;

    scanf("%lf", &ang_rad);
    scanf("%d", &num_termos);

    printf("cos(%.2f) = %.6f\n", ang_rad, coseno(ang_rad, num_termos));

    return 0;
}