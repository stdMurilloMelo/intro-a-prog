#include <stdio.h>
#include <string.h>

void imprimirSequenciaEspelho(int inicio, int fim)
{
    char sequencia[12221];
    char reverso[12221];
    int i;

    sprintf(sequencia, "%d", inicio);
    int tamanho = strlen(sequencia);

    for (i = inicio + 1; i <= fim; i++)
    {
        sprintf(sequencia + tamanho, "%d", i);
        tamanho += strlen(sequencia + tamanho);
    }

    for (i = tamanho - 1; i >= 0; i--)
    {
        reverso[tamanho - i - 1] = sequencia[i];
    }
    reverso[tamanho] = '\0';

    printf("%s%s\n", sequencia, reverso);
}

int main()
{
    int casos;
    int caso, inicio, fim;

    scanf("%d", &casos);

    for (caso = 1; caso <= casos; caso++)
    {

        scanf("%d %d", &inicio, &fim);

        imprimirSequenciaEspelho(inicio, fim);
    }

    return 0;
}
