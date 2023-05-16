#include <stdio.h>

int main()
{
    int i, j, k=0;
    int n;

    scanf("%d", &n);

    for (i = 1; i < n+1; i++)
    {
        for (j = i + 1; j < n+1; j++)
        {
            k += 1;
            printf("Final %d: Time%d X Time%d\n", k, i, j);
        }
    }

    return 0;
}