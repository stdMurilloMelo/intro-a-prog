#include <stdio.h>
#include <math.h>

int main()
{
  int N, i;

  scanf("%d", &N);

  if (N >= 2 && N <= 1000)
  {
    double coordenadasX[N];
    double coordenadasY[N];
    double coordenadasZ[N];

    for (i = 0; i < N; i++)
    {
      scanf("%lf", &coordenadasX[i]);
      scanf("%lf", &coordenadasY[i]);
      scanf("%lf", &coordenadasZ[i]);
    }

    for (i = 0; i < N - 1; i++)
    {
      double diferencaX = fabs(coordenadasX[i + 1] - coordenadasX[i]);
      double diferencaY = fabs(coordenadasY[i + 1] - coordenadasY[i]);
      double diferencaZ = fabs(coordenadasZ[i + 1] - coordenadasZ[i]);
      double maiorDiferenca = -1002;

      if (diferencaX >= diferencaY && diferencaX >= diferencaZ)
      {
        maiorDiferenca = diferencaX;
      }
      else if (diferencaY >= diferencaX && diferencaY >= diferencaZ)
      {
        maiorDiferenca = diferencaY;
      }
      else if (diferencaZ >= diferencaX && diferencaZ >= diferencaY)
      {
        maiorDiferenca = diferencaZ;
      }

      printf("%.2lf\n", maiorDiferenca);
    }
  }

  return 0;
}
