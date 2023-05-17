#include <stdio.h>

double exponencial(double arg, int num_termos)
{
    int i;
    double resultado = 1.0;
    double numerador = 1.0;
    double denominador = 1.0;

    for (i = 1; i <= num_termos; i++)
    {
        numerador = numerador * arg;
        denominador = denominador * (i);
        resultado += numerador / denominador;
    }

    return resultado;
}

int main()
{
    double arg;
    int num_termos;

    scanf("%lf", &arg);
    scanf("%d", &num_termos);
    
    printf("e^%.2lf = %.6lf\n", arg, exponencial(arg, num_termos));

    return 0;
}