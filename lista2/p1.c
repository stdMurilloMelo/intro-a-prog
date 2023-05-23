#include <stdio.h>

unsigned long int fat(unsigned int n);

int main()
{
    unsigned int n;

    scanf("%u", &n);

    printf("%u! = %lu", n, fat(n));

    return 0;
}

unsigned long int fat(unsigned int n)
{
    unsigned long int fat = 1;
    int i;

    fat = 1;

    for (i = 1; i <= n; i++)
    {
        fat = fat * i;
    }
    
    return fat;
}