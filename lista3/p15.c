#include <stdio.h>

int tamanho_vetor(int *vetor, int intervalo)
{
  int qtd = 0;
  int i;
  for (i = 0; i < intervalo; i++)
  {
    if (vetor[i] == 1)
    {
      qtd++;
    }
  }
  return qtd;
}

void presenteNaAula(int *tempos_chegada, int N, int K)
{
  int i, j = 0;

  int alunos_presentes[N];
  for (i = 0; i < N; i++)
  {
    alunos_presentes[i] = 0;
  }

  for (i = 0; j < N; i++)
  {
    if (tempos_chegada[i] <= 0)
    {
      alunos_presentes[j]++;
    }
    else
    {
      alunos_presentes[j] = 0;
    }
    j++;
  }

  int tamPresente = tamanho_vetor(alunos_presentes, N);

  if (tamPresente < K)
  {
    printf("SIM\n");
  }
  else
  {
    printf("NAO\n");
    for (i = N - 1; i >= 0; i--)
    {
      if (alunos_presentes[i] == 1)
      {
        printf("%d\n", i + 1);
      }
    }
  }
}

int main()
{
  int N, K;
  int i;
  while (scanf("%d %d", &N, &K) != EOF)
  {
    if (N >= 0 && K <= 1000)
    {
      int tempos_chegada[N];
      for (i = 0; i < N; i++)
      {
        scanf("%d", &tempos_chegada[i]);
      }
      presenteNaAula(tempos_chegada, N, K);
    }
  }

  return 0;
}
