#include <stdio.h>

long int bin2dec(long int bin)
{
    long int dec = 0, fac = 1;
    int neg = 0;

    if (bin < 0)
    {
        bin = -bin;
        neg = 1;
    }

    while (bin > 0)
    {
        dec = dec + bin % 10 * fac;
        bin = bin / 10;
        fac = fac * 2;
    }

    if (neg)
    {
        return -dec;
    }
    else
    {
        return dec;
    }
}

int main()
{
    long int bin;
    scanf("%ld", &bin);

    printf("%ld\n", bin2dec(bin));

    return 0;
}