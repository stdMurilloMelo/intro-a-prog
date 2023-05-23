#include <stdio.h>

int fibonacci(int t1, int t2, int n);

int main()
{
    int t1, t2, n;

    scanf("%d %d %d", &t1, &t2, &n);

    fibonacci(t1, t2, n);

    printf("%d", fibonacci(t1, t2, n));

    return 0;
}

int fibonacci(int t1, int t2, int n)
{
    int i, fib;

    for (i = 0; i < n-2; i++)
    {
        fib = t2 + t1;
        t1 = t2;
        t2 = fib;
    }

    return fib;
}
