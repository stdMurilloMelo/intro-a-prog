#include <stdio.h>

long long bin_mdc(long long a, long long b)
{
    // casos base
    if (a == b)
    {
        return a;
    }
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    // se ambos sao pares
    if ((a & 1) == 0 && (b & 1) == 0)
    {
        return bin_mdc(a >> 1, b >> 1) << 1;
    }

    // se 'a' eh par e 'b' eh impar
    else if ((a & 1) == 0)
    {
        return bin_mdc(a >> 1, b);
    }

    // se 'a' eh par e 'b' eh impar
    else if ((b & 1) == 0)
    {
        return bin_mdc(a, b >> 1);
    }

    // se ambos sao impares e a > b
    else if (a > b)
    {
        return bin_mdc((a - b) >> 1, b);
    }

    // se ambos sao impares e a <= b
    else
    {
        return bin_mdc(a, (b - a) >> 1);
    }
}

int main()
{
    long long a, b;

    printf("Calcular mdc(a, b).\n\n");
    
    printf("Digite o valor de a: ");
    scanf("%lld", &a);
    
    printf("Digite o valor de b: ");
    scanf("%lld", &b);
    
    printf("mdc(%lld, %lld) =  %lld\n", a, b, bin_mdc(a, b));

    return 0;
}