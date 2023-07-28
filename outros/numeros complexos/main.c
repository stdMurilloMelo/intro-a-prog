
#include <stdio.h>
#include "complex.h"

int main()
{
	Complex a, b, c;
	a = cp_new(2, 3);
	b = cp_new(-1, 5);
	c = cp_sum(a, b);
	cp_print(c, RETANGULAR);
	printf("\n");
	c = cp_mult(a, b);
	cp_print(c, RETANGULAR);
	printf("\n");
	c = cp_div(a, b);
	cp_print(c, RETANGULAR);
	printf("\n");
	cp_print(c, POLAR);
	printf("\n");
	return 0;
}