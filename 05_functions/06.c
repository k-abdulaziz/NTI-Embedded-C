/* 6. Write a function to encode a string that is passed to it. 
   The string should get converted into an unrecognizable form. */

#include <stdio.h>
#include <string.h>

void decode_string(char str[]);

int main(void)
{
    char string[50];
    printf("Enter string:");
    gets(string);

    decode_string(string);

    return 0;
}

void decode_string(char str[])
{
    int i;
    printf("Decoding:\n");

    for (i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 14;
        printf("%c",str[i]);
    }
    printf("\nEncoding:\n");

    for (i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 14;
        printf("%c",str[i]);
    }
}
