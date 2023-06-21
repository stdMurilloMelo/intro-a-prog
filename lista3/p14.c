#include <stdio.h>

int le_string(char *str, int n)
{
    char c;
    int count = 0;
    int i;

    while (1)
    {
        c = getchar();

        if (c != '\r' && c != '\n')
        {
            str[count] = c;
            count++;
            break;
        }
    }

    // Ler caracteres até encontrar '\n' ou '\r'
    while (1)
    {
        c = getchar();

        if (c == '\r' || c == '\n')
        {
            break;
        }

        str[count] = c;

        count++;
    }

    if (count > n)
    {
        count = n;
    }

    // Adicionar '\0' ao final da string
    str[count] = '\0';

    return count;
}

void print_codes(char *str)
{
    int i = 0;
    printf("%d", str[0]);
    i += 1;
    while (str[i] != '\0')
    {
        printf(",%d", str[i]);
        i += 1;
    }
    printf("\n");
}

int main()
{
#define N 128 + 1
    char str[N], s[N];
    char c;
    int i;

    scanf("%c", &c);
    le_string(str, 3);
    print_codes(str);
    printf("caracter:%c, str:%s\n", c, str);

    scanf("%c", &c);
    le_string(str, 5);
    print_codes(str);
    printf("caracter:%c, str:%s\n", c, str);

    scanf("%c", &c);
    le_string(str, 5);
    print_codes(str);
    printf("caracter:%c, str:%s\n", c, str);

    scanf("%d", &i);
    le_string(str, 3);
    print_codes(str);
    printf("inteiro:%d, str:%s\n", i, str);

    scanf("%d", &i);
    le_string(str, 15);
    print_codes(str);
    printf("inteiro:%d, str:%s\n", i, str);

    scanf("%s", s);
    le_string(str, 100);
    print_codes(str);
    printf("string:%s, str:%s\n", s, str);

    scanf("%s", s);
    le_string(str, 100);
    print_codes(str);
    printf("string:%s, str:%s\n", s, str);

    return 0;
}
