#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *v, k,
        i,
        count = 0;

    do
    {
        scanf("%d", &n);
    } while (n < 1 || n > 1000);

    v = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        if (v[i] >= k)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
