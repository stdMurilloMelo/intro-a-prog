#include <stdio.h>

typedef struct
{
    int numerador;
    int denominador;
} Fracao;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

Fracao simplificarFracao(Fracao fracao)
{
    int divisor = gcd(fracao.numerador, fracao.denominador);
    fracao.numerador /= divisor;
    fracao.denominador /= divisor;
    return fracao;
}

int compararFracao(Fracao f1, Fracao f2)
{
    return (f1.numerador * f2.denominador) == (f2.numerador * f1.denominador);
}

void encontrarFracoesEquivalentes(Fracao fracoes[], int tamanho)
{
    int i, j;
    int encontrou = 0;

    for (i = 0; i < tamanho - 1; i++)
    {
        for (j = i + 1; j < tamanho; j++)
        {
            Fracao fracao1 = simplificarFracao(fracoes[i]);
            Fracao fracao2 = simplificarFracao(fracoes[j]);

            if (compararFracao(fracao1, fracao2))
            {
                printf("%d/%d equivalente a %d/%d\n", fracoes[i].numerador, fracoes[i].denominador, fracoes[j].numerador, fracoes[j].denominador);
                encontrou = 1;
            }
        }
    }

    if (!encontrou)
    {
        printf("Nao ha fracoes equivalentes na sequencia\n");
    }
}

int main()
{
    int numCasos, caso;
    int tamanho, i;

    scanf("%d", &numCasos);

    for (caso = 1; caso <= numCasos; caso++)
    {
        scanf("%d", &tamanho);

        Fracao fracoes[tamanho];

        for (i = 0; i < tamanho; i++)
        {
            scanf("%d/%d", &fracoes[i].numerador, &fracoes[i].denominador);
        }

        printf("Caso de teste %d\n", caso);
        encontrarFracoesEquivalentes(fracoes, tamanho);
    }

    return 0;
}
