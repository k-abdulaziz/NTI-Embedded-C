/* 8. Write a program that reverses the words in a sentence: Enter a sentence: 
you can cage a swallow can't you? Reversal of sentence: you can't swallow a cage can you? */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int i, len;
    printf("Enter a sentence:");
    gets(str);
    len = strlen(str);
    printf("Reversal of sentence:\n");
    for(i = len - 1; i >= 0; i--)
    {
        if(str[i] == ' ')
        {
            str[i] = '\0';
            printf("%s ", &(str[i]) + 1);
        }
    }
    printf("%s", str);

    return 0;
}
