#include <stdio.h>

void converteEmNotasMoedas(int num_reais, int *n_100, int *n_50, int *n_10, int *n_1)
{
    *n_100 = num_reais / 100;
    *n_50 = (num_reais % 100) / 50;
    *n_10 = (num_reais % 50) / 10;
    *n_1 = (num_reais % 10);
}

int main()
{
    int dindin, n_100, n_50, n_10, n_1;

    scanf("%d", &dindin);

    converteEmNotasMoedas(dindin, &n_100, &n_50, &n_10, &n_1);

    printf("NOTAS DE 100 = %d\n"
            "NOTAS DE 50 = %d\n"
            "NOTAS DE 10 = %d\n"
            "MOEDAS DE 1 = %d\n", n_100, n_50, n_10, n_1);

    return 0;
}
