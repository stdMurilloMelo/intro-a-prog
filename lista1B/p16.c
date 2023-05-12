#include <stdio.h>
#include <math.h>

int fatorial(int n)
{
    int i, f = 1;

    if (n == 0 || n == 1)
        return 1;

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int n, i, neg = 1;
    double x, y = 1, x1, x2;

    scanf("%lf", &x);
    scanf("%d", &n);

    x1 = x;
    x2 = x1 * x1;
    x = x2;

    for (i = 1; i <= n; i++)
    {
        if (neg)
        {
            y += -x / fatorial(2 * i);
            neg = 0;
        }

        else
        {
            y += x / fatorial(2 * i);
            neg = 1;
        }
        printf("%d = %.6lf\n", i, y);
        x = x*x2;
    }

    printf("cos(%.2lf) = %.10lf\n", x1, y);

    return 0;
}