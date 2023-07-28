#include "complex.h"
#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

Complex cp_new(double r, double i)
{
    Complex z;
    z.r = r;
    z.i = i;

    return z;
}

Complex cp_sum(Complex a, Complex b)
{
    Complex sum;

    sum.r = a.r+b.r;
    sum.i = a.i+b.i;

    return sum;
}

void cp_print(Complex z, int tipo)
{
    double rho, theta;
    if(tipo == RETANGULAR)
    {
        printf("%lf+i*(%lf)\n", z.r, z.i);
    }
    else if (tipo == POLAR)
    {
        rho = sqrt(z.r*z.r+z.i*z.i);
        theta = (z.r == 0)? M_PI_2 : atan2(z.i, z.r);
        printf("%lf <%lf", rho, theta);
    }
}

