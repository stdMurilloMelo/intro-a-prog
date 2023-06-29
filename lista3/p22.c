#include <stdio.h>

void bubbleSort(int array[], int size)
{
    int i, j, temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int sumExcept(int array[], int a, int b)
{
    int i, sum = 0;

    for (i = 0; i < 9; i++)
    {
        if (i != a && i != b)
        {
            sum += array[i];
        }
    }

    return sum;
}

void checkAnoes(int anoes[])
{
    int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = i + 1; j < 9; j++)
        {
            if (sumExcept(anoes, i, j) == 100)
            {
                anoes[i] = 0;
                anoes[j] = 0;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int anoes[9];
    int qnt, i, j, k;

    scanf("%d", &qnt);

    for (i = 0; i < qnt; i++)
    {
        for (j = 0; j < 9; j++)
        {
            scanf("%d", &anoes[j]);
        }

        checkAnoes(anoes);
        bubbleSort(anoes, 9);
        for (k = 2; k < 9; k++)
        {
            printf("%d\n", anoes[k]);
        }
    }

    return 0;
}
