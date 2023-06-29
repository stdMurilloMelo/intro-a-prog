#include <stdio.h>

#define N_max 10001

int main()
{

    int Qtd_notas, vetor[N_max], i;

    scanf("%d", &Qtd_notas);

    for (i = 0; i < Qtd_notas; i++)
    {
        scanf("%d", &vetor[i]);
    }

    int maior_nota = vetor[0];
    int posicao;
    for (i = 1; i < Qtd_notas; i++)
    {
        if (vetor[i] > maior_nota)
        {
            maior_nota = vetor[i];
            posicao = i;
        }
    }

    int ultima_nota = vetor[Qtd_notas - 1], j, contador = 0;
    for (j = 0; j < Qtd_notas; j++)
    {
        if (vetor[j] == ultima_nota)
            contador++;
    }

    printf("Nota %d, %d vezes\nNota %d, indice %d\n", ultima_nota, contador, maior_nota, posicao);

    return 0;
}
