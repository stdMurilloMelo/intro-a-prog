#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 500

char *criar_prefixo(int n, char *str)
{
    if (n < 0)
        return NULL;

    int tamanho = strlen(str);
    int tamanho_prefixo = (n < tamanho) ? n : tamanho;

    char *prefixo = malloc((n + 1) * sizeof(char));

    if (prefixo == NULL)
        return NULL;

    int i;

    for (i = 0; i < tamanho_prefixo; i++)
        prefixo[i] = str[i];

    prefixo[tamanho_prefixo] = '\0';

    return prefixo;
}

int main(int argc, char const *argv[])
{
    int N, i, n;

    char s[MAX];
    char *prefixo;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d %[^\n]", &n, s);
        prefixo = criar_prefixo(n, s);
        printf("%s\n", prefixo);
        free(prefixo); // Liberar memória alocada
    }

    return 0;
}
