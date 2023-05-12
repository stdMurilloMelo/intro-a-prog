#include <stdio.h>

int somaDivisores(int a)
{
    int s = 0, i;
    for (i = 1; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            s += i;
        }
    }
    return s;
}

int main()
{
    int num_amg;
    int a = 1, b = 284;

    scanf("%d", &num_amg);

    while (num_amg > 0)
    {
        while (1)
        {
            if (a >= b)
            {
                a = 1;
                b += 1;
            }
            else if (a < b && (somaDivisores(a) == b) && (somaDivisores(b) == a))
            {
                break;
            }

            a += 1;
        }

        printf("(%d,%d)\n", a, b);
        num_amg += -1;
        b += 1;
        a = 1;
    }

    return 0;
}