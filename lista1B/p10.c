#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int m, n;
    int i, j;

    scanf("%d", &m);
    scanf("%d", &n);

    
    for (i = 2; i <= m; i++)
    {
        printf("(%d,1)", i);
        for (j = 2; j <= n; j++)
        {
            if (i > j)
            {
                printf("-(%d,%d)", i, j);
            }
            else
            {
                break;
            }
            
        }
        printf("\n");
    }

    return 0;
}