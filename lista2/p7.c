#include <stdio.h>

void print_bytes(const void *end_byte, int n)
{
    int i, j;

    unsigned char *ptr = (unsigned char *)end_byte;

    for (i = 0; i < n; i++)
    {
        for (j = 7; j >= 0; j--)
        {
            unsigned char bit = (ptr[i] >> j) & 1;
            printf("%u", bit);
        }
        if (i != (n - 1))
        {
            printf(" ");
        }
    }
}

int main()
{
    double numero;

    scanf("%lf", &numero);

    unsigned char byte_char = (unsigned char)numero;
    unsigned short byte_short = (unsigned short)numero;
    unsigned int byte_int = (unsigned int)numero;
    float byte_float = (float)numero;

    print_bytes(&byte_char, sizeof(byte_char));
    printf("\n");

    print_bytes(&byte_short, sizeof(byte_short));
    printf("\n");

    print_bytes(&byte_int, sizeof(byte_int));
    printf("\n");

    print_bytes(&byte_float, sizeof(byte_float));
    printf("\n");

    print_bytes(&numero, sizeof(numero));
    printf("\n");

    return 0;
}
