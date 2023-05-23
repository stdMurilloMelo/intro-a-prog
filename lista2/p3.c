#include <stdio.h>

void separaDigitos(int num, int *d1, int *d2, int *d3)
{
    *d1 = num / 100;       // Primeiro dígito
    *d2 = (num / 10) % 10; // Segundo dígito
    *d3 = num % 10;        // Terceiro dígito
}

int main()
{
    int numero, d1, d2, d3;

    scanf("%d", &numero);

    separaDigitos(numero, &d1, &d2, &d3);

    printf("%d%d%d\n", d3, d2, d1);

    return 0;
}
