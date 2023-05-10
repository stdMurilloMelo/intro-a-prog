#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    if (x % 2 != 0)
    {
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }

    else
    {
        do
        {
            x = x + 2;
            printf("%d ", x);
            --y;
        } while (y>1);
        
        printf("\n");
    }
    return 0;
}