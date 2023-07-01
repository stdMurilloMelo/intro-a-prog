#include <stdio.h>
#include <stdlib.h>

void intercalarOrdenado(int *v1, int *v2, int *vr, int q1, int q2)
{
    int i = 0, j = 0, k = 0;

    while (i < q1 && j < q2)
    {
        if (v1[i] <= v2[j])
        {
            vr[k] = v1[i];
            i++;
        }
        else
        {
            vr[k] = v2[j];
            j++;
        }
        k++;
    }

    while (i < q1)
    {
        vr[k] = v1[i];
        i++;
        k++;
    }

    while (j < q2)
    {
        vr[k] = v2[j];
        j++;
        k++;
    }
}

int main()
{
    int q1, q2;
    scanf("%d %d", &q1, &q2);

    int *v1 = malloc(q1 * sizeof(int));
    int *v2 = malloc(q2 * sizeof(int));
    int *vr = malloc((q1 + q2) * sizeof(int));

    int i;
    for (i = 0; i < q1; i++)
    {
        scanf("%d", &v1[i]);
    }

    for (i = 0; i < q2; i++)
    {
        scanf("%d", &v2[i]);
    }

    intercalarOrdenado(v1, v2, vr, q1, q2);

    for (i = 0; i < q1 + q2; i++)
    {
        printf("%d\n", vr[i]);
    }

    free(v1);
    free(v2);
    free(vr);

    return 0;
}
