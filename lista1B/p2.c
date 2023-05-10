#include <stdio.h>

int main()
{
    int n, i, c;
    scanf("%d", &n);

    if (n<5 || n>2000)
    {
        return 0;
    }
    
    for (i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            c = i * i;
            printf("%d^2 = %d\n", i, c);
        }
    }

    return 0;
}