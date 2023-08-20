#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float coeff;
    int exp;
} Term;

int PolySum(Term pr[], int nr, Term p1[], int n1, Term p2[], int n2)
{
    int i = 0, j = 0, k = 0;
    float coeff;

    while (i < n1 && j < n2)
    {
        if (p1[i].exp > p2[j].exp)
        {
            pr[k] = p1[i];
            i++;
            k++;
        }
        else if (p2[j].exp > p1[i].exp)
        {
            pr[k] = p2[j];
            j++;
            k++;
        }
        else
        {
            pr[k].coeff = p1[i].coeff + p2[j].coeff;
            pr[k].exp = p1[i].exp;
            k++;
            i++;
            j++;
        }
    }

    while (i < n1)
    {
        pr[k] = p1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        pr[k] = p2[j];
        j++;
        k++;
    }

    return k;
}

void PolyResultPrint(Term pr[], int nr)
{
    int i;
    for (i = 0; i < nr; i++)
    {
        if (pr[i].coeff != 0)
        {
            printf("%+.2f", pr[i].coeff);
            if (pr[i].exp != 0)
                printf("X^%d", pr[i].exp);
        }
    }

    printf("\n");
}

int main(int argc, char const *argv[])
{
    int casos;
    char op;
    int n1, n2, nr;
    Term *p1, *p2, *pr;

    int i;

    scanf("%d", &casos);
    getchar();

    while (casos--)
    {
        scanf("%c", &op);

        // p 1
        scanf("%d", &n1);
        p1 = malloc(n1 * sizeof(Term));
        for (i = 0; i < n1; i++)
            scanf("%f %d", &p1[i].coeff, &p1[i].exp);

        // p 2
        scanf("%d", &n2);
        p2 = malloc(n2 * sizeof(Term));
        for (i = 0; i < n2; i++)
            scanf("%f %d", &p2[i].coeff, &p2[i].exp);
        if (op == '-')
            for (i = 0; i < n2; i++)
                p2[i].coeff = -p2[i].coeff;

        // p resultante
        nr = (p1[0].exp > p2[0].exp) ? p1[0].exp + 1 : p2[0].exp + 1;
        pr = malloc(nr * sizeof(Term));

        int size = PolySum(pr, nr, p1, n1, p2, n2);
        PolyResultPrint(pr, size);

        getchar();

        free(p1);
        free(p2);
        free(pr);
    }

    return 0;
}
