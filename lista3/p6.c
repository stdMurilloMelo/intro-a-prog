#include <stdio.h>
#include <string.h>

int check_word(char *word)
{
    int i;
    int erros;

    if (strlen(word) == 5)
    {
        return 3;
    }

    if (word[0] != 'o') erros++; 
    if (word[1] != 'n') erros++; 
    if (word[2] != 'e') erros++; 
    if (erros<=1) return 1;

    erros = 0;    
    if (word[0] != 't') erros++; 
    if (word[1] != 'w') erros++; 
    if (word[2] != 'o') erros++; 
    if (erros<=1) return 2;
    
    
    
}

int main(int argc, char const *argv[])
{
    int num_words,
        i;

    scanf("%d", &num_words);
    
    char word[6];

    for (i = 0; i < num_words; i++)
    {
        scanf("%s", word);
        printf("%d\n", check_word(word));
    }
    

    return 0;
}
