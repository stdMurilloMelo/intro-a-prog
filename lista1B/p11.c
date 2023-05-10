#include <stdio.h>

int main()
{
    int T, i, j, k;
    int A, invA, B, invB, maior[T];

    scanf("%d", &T);
    
    for (i = 0; i < T; i++)
    {
        scanf("%d %d", &A, &B);
        invA = 0;
        invB = 0;
        
        //inversao
        for (j = 0; j < 3; j++)
        {
            invA = invA * 10 + A % 10;
            A = (A - A % 10) / 10;
            invB = invB * 10 + B % 10;
            B = (B - B % 10) / 10;
        }


        if (invA > invB)
        {
            maior[i] = invA;
        }

        else if (invA < invB)
        {
            maior[i] = invB;
        }
        // printf("%d\n", maior[i]);
    }

    for (k = 0; k < T; k++)
    {
        printf("%d\n", maior[k]);
    }

    return 0;
}