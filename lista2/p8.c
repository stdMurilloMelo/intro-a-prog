#include <stdio.h>


double absoluto(double n)
{
    if (n >= 0)
    {
        return n;
    }
    else
    {
        return -n;
    }
}

int uint_pow(int base, int exp)
{
    int resultado = 1;
    while (exp)
    {
        if (exp % 2)
            resultado *= base;
        exp /= 2;
        base *= base;
    }
    return resultado;
}

int next_power(int n, int p)
{
    int temp,
        i;

    for (i = 0; i <= n; i++)
    {
        if (absoluto(uint_pow(i, p) - n) < absoluto(uint_pow(temp, p) - n))
        {
            temp = i;
        }
    }

    return temp;
}

int main()
{
    int n,p, next;

    scanf("%d %d", &n, &p);

    next = next_power(n,p);
    
    printf("%d -> %d%c%d = %d", n, next,94, p, uint_pow(next, p));

    return 0;
}
