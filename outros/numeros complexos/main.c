#include "complex.h"

int main(int argc, char const *argv[])
{
    Complex a,b,c;
    a = cp_new(2,3);
    b = cp_new(-1,5);
    c = cp_sum(a,b);
    cp_print(c, POLAR);

    return 0;
}
