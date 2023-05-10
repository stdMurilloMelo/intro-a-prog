#include <stdio.h>
 
int main()
{
 
    float v[3], temp;
    int i, j, op;
 
    scanf("%d", &op);
    scanf("%f", &v[0]);
    scanf("%f", &v[1]);
    scanf("%f", &v[2]);
 
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (v[i] > v[j])
            {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    if (op == 1)
    {
        printf("%.2f %.2f %.2f", v[0], v[1], v[2]);
    }
    else if (op == 2)
    {
        printf("%.2f %.2f %.2f", v[2], v[1], v[0]);
    }
    else if (op == 3)
    {
        printf("%.2f %.2f %.2f", v[1], v[2], v[0]);
    }
 
    return 0;
}