#include <stdio.h>

double absoluto(double n)
{
    if (n >= 0)
    {
        return n;
    }
    else
    {
        return -n;
    }
}

double raiz(double n, double p)
{
    double r = 1, temp, e;

    do
    {
        temp = r;
        r = (temp + n / temp) / 2;
        e = absoluto(n - r * r);
        printf("r: %.9lf, err: %.9lf\n", r, e);

    } while (absoluto(n - r * r) > p);

    return r;
}

int main()
{
    double n, p;

    scanf("%lf %lf", &n, &p);

    raiz(n, p);

    return 0;
}