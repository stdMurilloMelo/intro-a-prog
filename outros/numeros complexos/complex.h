#define RETANGULAR 1
#define POLAR 0

typedef struct complex
{
    double r, i;
} Complex;

Complex cp_new(double r, double i);
Complex cp_sum(Complex a, Complex b);
void cp_print(Complex a, int tipo);

