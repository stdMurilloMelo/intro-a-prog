#include <stdio.h>
#include <ctype.h>

int main()
{

    char linha[10001];
    char c;
    int casos_teste;
    int i, j, letras, vogais, consoantes;

    scanf("%d", &casos_teste);
    getchar();

    for (i = 0; i < casos_teste; i++)
    {
        fgets(linha, sizeof(linha), stdin); // Lê a linha de texto

        letras = 0;
        vogais = 0;
        consoantes = 0;

        for (j = 0; linha[j] != '\0'; j++)
        {
            if (isalpha(linha[j]))
            { // Verifica se é uma letra
                letras++;

                c = tolower(linha[j]); // Converte para minúscula para facilitar a verificação de vogais/consoantes

                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                {
                    vogais++;
                }
                else
                {
                    consoantes++;
                }
            }
        }

        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", letras, vogais, consoantes);
    }

    return 0;
}
