#include <stdio.h>
#include <math.h>

int raizesEq2Grau(double a, double b, double c, double *x1, double *x2)
{
    double delta;

    delta = b * b - 4 * a * c;

    if (delta > 0)
    {
        *x1 = (-b - sqrt(delta)) / (2 * a);
        *x2 = (-b + sqrt(delta)) / (2 * a);
        return 2;
    }

    else if (delta < 0)
    {
        return 0;
    }

    else
    {
        *x1 = -b / (2 * a);
        return 1;
    }
}

int main()
{
    double a, b, c, d, x1, x2;

    int class;

    scanf("%lf %lf %lf", &a, &b, &c);

    class = raizesEq2Grau(a, b, c, &x1, &x2);

    if (class == 2)
    {
        printf("RAIZES DISTINTAS\n");
        if (x1 < x2)
        {
            printf("X1 = %.2lf\nX2 = %.2lf", x1, x2);
        }
        else
        {
            printf("X1 = %.2lf\nX2 = %.2lf", x2, x1);
        }
    }
    else if (class == 1)
    {
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", x1);
    }
    else
    {
        printf("RAIZES IMAGINARIAS\n");
    }

    return 0;
}
