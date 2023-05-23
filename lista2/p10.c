#include <stdio.h>

double compute_pi(int n)
{
    int i, j;

    double resultado = 1.0;

    for (i = 1; i <= n; i++)
    {
        if (i % 2)
        {
            resultado *= (i + 1.0) / (i);
        }
        else
        {
            resultado *= (i) / (i + 1.0);
        }
    }

    return 2 * resultado;
}

int main()
{
    int n;

    scanf("%d", &n);

    double y = compute_pi(n);

    printf("%.12lf", y);

    return 0;
}
