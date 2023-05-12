#include <stdio.h>

int main()
{
    int n = 4, i, f = 1;

    scanf("%d", &n);

    if (n == 0)
    {
        printf("0! = 1\n");
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }

    printf("%d! = %d\n", n, f);
}