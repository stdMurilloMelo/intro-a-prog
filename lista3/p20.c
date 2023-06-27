#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int achar_index_max(int start, int end, char *dig)
{
    int max = dig[start], temp;
    int indice = start;
    int i;

    for (i = start; i < end; i++)
    {
        temp = dig[i];
        if (temp > max)
        {
            max = dig[i];
            indice = i;
        }
    }

    return indice;
}

int main(int argc, char const *argv[])
{
    int n, d;
    char lousa[1000001];
    int len,
        start, k, check,
        index;

    while (1)
    {
        scanf("%d %d", &n, &d);

        if (n == 0 && d == 0)
        {
            break;
        }

        scanf("%s", lousa);
        len = strlen(lousa),
        start = 0, k = 1, check = d,
        index;

        while (check > 0)
        {
            index = achar_index_max(start, len - d + k, lousa);
            printf("%c", lousa[index]);
            check--;
            k += 1;
            start = index + 1;
        }
        printf("\n");
    }

    return 0;
}
