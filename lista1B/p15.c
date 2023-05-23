#include <stdio.h>

int somaDivisores(int n)
{
    int soma = 0;
    int i;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            soma += i;
        }
    }
    return soma;
}

void encontrarNumerosAmigos(int n)
{
    int numeros_amigos[n][2];
    int count = 0;
    int num = 220;

    while (count < n)
    {
        int soma = somaDivisores(num);
        if (soma > num && somaDivisores(soma) == num)
        {
            numeros_amigos[count][0] = num;
            numeros_amigos[count][1] = soma;
            count++;
        }
        num++;
    }

    int i;
    for (i = 0; i < n; i++)
    {
        printf("(%d,%d)\n", numeros_amigos[i][0], numeros_amigos[i][1]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    encontrarNumerosAmigos(n);

    return 0;
}
