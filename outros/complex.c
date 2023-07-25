#include "complex.h"
#include <stdio.h>
#include <math.h>

Complex cp_new(double r, double i)
{
    Complex c;
    c.r = r;
    c.i = i;

    return c;
}

Complex cp_sum(Complex a, Complex b)
{
    Complex sum;

    sum.r = a.r+b.r;
    sum.i = a.i+b.i;

    return sum;
}

Complex cp_print(Complex a, int tipo)
{
    double rho, theta;
    if(tipo == RETANGULAR)
    {
        printf("%lf+i*(%lf)\n", a.r, a.i);
    }
    else if (tipo == POLAR)
    {
        rho = sqrt(a.r*a.r+a.i*a.i);
        theta = ()? : 
        printf("%lf <%lf", rho, );
    }
    
}