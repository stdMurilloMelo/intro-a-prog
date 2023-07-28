
#define RETANGULAR 1
#define POLAR 2

struct complex
{
	double r, i;
};
typedef struct complex Complex;

Complex cp_new(double r, double i);

Complex cp_sum(Complex A, Complex B);

void cp_print(Complex A, int tipo);

Complex cp_mult(Complex A, Complex B);
Complex cp_conj(Complex A);
double cp_ang(Complex A);
double cp_len(Complex A);
Complex cp_div(Complex A, Complex B);