#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 200
#define MAX_WORD_LEN 64 + 1

int str_split(char *str, char m[][MAX_WORD_LEN], char *sep)
{
    int i = 0, j = 0, k = 0;

    while (str[i] != '\0')
    {
        while (strchr(sep, str[i]) != NULL && str[i] != '\0')
        {
            i++;
        }

        if (str[i]=='\0')
        {
            break;
        }
        
        while (strchr(sep, str[i]) == NULL)
        {
            m[j][k] = str[i];
            k++;
            i++;
        }

        m[j][k] = '\0';
        k = 0;
        j++;

    }

    return j;
}

void print_words(char m[][MAX_WORD_LEN], int num_word)
{
    int i, len;
    for (i = 0; i < num_word; i++)
    {
        len = strlen(m[i]);
        printf("(%d)%s\n", len, m[i]);
    }
}

int MaxLen(char m[][MAX_WORD_LEN], int num_word)
{
    int max = strlen(m[0]), i;

    for (i = 0; i < num_word; i++)
        if (strlen(m[i]) > max)
            max = strlen(m[i]);

    return max;
}

int Qnt_MaxLen(char m[][MAX_WORD_LEN], int num_word, int max_len)
{
    int count = 0, i;

    for (i = 0; i < num_word; i++)
        if (strlen(m[i]) == max_len)
            count++;

    return count;
}

int main(int argc, char const *argv[])
{
    char str[MAX_WORDS * MAX_WORD_LEN];
    char m[MAX_WORDS][MAX_WORD_LEN];
    char sep[MAX_WORD_LEN];

    int num_word, qnt_max_len;

    scanf("%[^\n]", str);
    getchar();
    scanf("%[^\n]", sep);

    num_word = str_split(str, m, sep);

    print_words(m, num_word);

    qnt_max_len = Qnt_MaxLen(m, num_word, MaxLen(m, num_word));

    printf("%d\n", qnt_max_len);

    return 0;
}
