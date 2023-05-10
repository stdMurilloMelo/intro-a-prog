#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double n, r = 1, err, temp, e;

    scanf("%lf %lf", &n, &err);

    do
    {
        temp = r;
        r = (temp + n / temp) / 2;
        e = fabs(n - r * r);
        printf("r: %.9lf, err: %.9lf\n", r, e);

    } while (fabs(n - r * r) > err);
    
    return 0;
}