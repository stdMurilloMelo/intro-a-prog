#include <stdio.h>
#include <math.h>

int fatorial(int n)
{
    int i, f = 1;

    if (n == 0)
        return 1;

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int n, i;
    double x, y = 1;

    scanf("%lf", &x);
    scanf("%d", &n);

    double x0 = x;

    for (i = 1; i <= n; i++)
    {
        y += x / fatorial(i);
        printf("%d: %.6lf\n", i, y);
        x *= x0;
    }

    printf("e^%.2lf = %.6lf\n", x0, y);

    return 0;
}