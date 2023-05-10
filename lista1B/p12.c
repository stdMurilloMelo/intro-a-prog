#include <stdio.h>
#include <math.h>

int main()
{
    int n, c1, c2, hip;

    scanf("%d", &n);

    for (hip = 1; hip <= n; hip++)
    {
        for (c1 = 1; c1 < hip; c1++)
        {
            c2 = c1;
            while (c1 * c1 + c2 * c2 < hip * hip)
            {
                c2 += 1;
            }
            if (c1 * c1 + c2 * c2 == hip * hip)
            {
                printf("hipotenusa = %d, catetos %d e %d\n", hip, c1, c2);
            }
        }
    }

    return 0;
}