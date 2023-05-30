#include <stdio.h>

unsigned long int fat(unsigned int n)
{
    int i;
    unsigned long int f = 1;

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;
}

int main()
{
    int i, j;
    int l1, l2;
    unsigned long int ele;

    scanf("%d %d", &l1, &l2);

    for (i = l1; i <= l2; i++)
    {
        printf("1");

        for (j = 1; j <= i; j++)
        {
            ele = fat(i) / (fat(j) * fat(i - j));

            printf(",%lu", ele);
        }

        printf("\n");
    }

    return 0;
}