#include <math.h>
#include <stdio.h>
#include "complex.h"

Complex cp_new(double r,
			   double i)
{
	Complex c;
	c.r = r;
	c.i = i;
	return c;
}

Complex cp_sum(Complex A, Complex B)
{
	Complex R;
	R.r = A.r + B.r;
	R.i = A.i + B.i;
	return R;
}
void cp_print(Complex A, int tipo)
{
	double ang, rho;
	if (tipo == RETANGULAR)
	{
		printf("%.2lf%+.2lfi", A.r, A.i);
	}
	else if (tipo == POLAR)
	{
		ang = cp_ang(A);
		rho = cp_len(A);
		printf("%.2lfL%.2lf", rho, ang);
	}
}

Complex cp_mult(Complex A, Complex B)
{
	Complex R;
	R.r = A.r * B.r - A.i * B.i;
	R.i = A.r * B.i + A.i * B.r;
	return R;
}

Complex cp_conj(Complex A)
{
	A.i = -A.i;
	return A;
}

double cp_ang(Complex A)
{
	return atan2(A.i, A.r) * 180 / M_PI;
}

double cp_len(Complex A)
{
	return sqrt(A.r * A.r + A.i * A.i);
}

Complex cp_div(Complex A, Complex B)
{
	Complex conj = cp_conj(B);
	B = cp_mult(B, conj);
	A = cp_mult(A, conj);
	A.r /= B.r;
	A.i /= B.r;
	return A;
}