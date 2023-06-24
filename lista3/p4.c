#include <stdio.h>
#include <string.h>

int countLeds(char *num)
{
    int leds = 0;
    int i;
    int len = strlen(num);

    for (i = 0; i < len; i++)
    {
        switch (num[i])
        {
        case '1':
            leds += 2;
            break;
        case '2':
        case '3':
        case '5':
            leds += 5;
            break;
        case '4':
            leds += 4;
            break;
        case '6':
        case '9':
        case '0':
            leds += 6;
            break;
        case '7':
            leds += 3;
            break;
        case '8':
            leds += 7;
            break;
        }
    }

    return leds;
}

int main()
{
    int N;
    scanf("%d", &N);

    char num[102];

    while (N > 0)
    {
        scanf("%s", num);
        int leds = countLeds(num);
        printf("%d leds\n", leds);
        N--;
    }

    return 0;
}
