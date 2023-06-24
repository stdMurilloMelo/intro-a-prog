#include <stdio.h>
#include <string.h>

void primeiropasso(char msg[])
{
    int i;
    char c;

    for (i = 0; i < strlen(msg); i++)
    {
        c = msg[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            msg[i] = c + 3;
            /* if (c >= 'x' || c >= 'X')
            {
                msg[i] = c - 23;
            }
            else
            {
                msg[i] = c + 3;
            } */
        }
    }
}

void segundopasso(char msg[])
{
    int len = strlen(msg);
    int start = 0;
    int end = len - 1;

    while (start < end)
    {
        char temp = msg[start];
        msg[start] = msg[end];
        msg[end] = temp;

        start++;
        end--;
    }
}

void terceiropasso(char msg[])
{
    int len = strlen(msg);
    int i;

    for (i = len / 2; i < len; i++)
    {
        msg[i] += -1;
    }
}

int main(int argc, char const *argv[])
{
    int num, i;
    char msg[1001];

    scanf("%d", &num);
    getchar();

    for (i = 0; i < num; i++)
    {
        fgets(msg, sizeof(msg), stdin);

        int len = strlen(msg);
        if (msg[len - 1] == '\n')
        {
            msg[len - 1] = '\0';
        }

        primeiropasso(msg);
        segundopasso(msg);
        terceiropasso(msg);

        printf("%s\n", msg);
    }

    return 0;
}
