#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double *new_vect(int nelementos)
{
    double *p = (double *)malloc(nelementos * sizeof(double));
    return p;
}

void free_vect(double *p)
{
    free(p);
}

double dist(double *p1, double *p2)
{
    double k = 0;
    int i;
    for (i = 0; i < 4; i++)
        k += (p1[i] - p2[i]) * (p1[i] - p2[i]);

    return sqrt(k);
}

int main(int argc, char const *argv[])
{
    double *p1 = new_vect(4);
    double *p2 = new_vect(4);
    double *temp;
    int qnt_points, i;

    scanf("%d", &qnt_points);
    for (i = 0; i < 4; i++)
        scanf("%lf", &p1[i]);
    for (i = 0; i < 4; i++)
        scanf("%lf", &p2[i]);
    printf("%.2lf\n", dist(p1, p2));

    qnt_points -= 2;

    while (qnt_points--)
    {
        temp = p1;
        p1 = p2;
        for (i = 0; i < 4; i++)
            scanf("%lf", &temp[i]);
        printf("%.2lf\n", dist(p1, temp));
        p2 = temp;
    }

    free_vect(p1);
    free_vect(p2);

    return 0;
}
