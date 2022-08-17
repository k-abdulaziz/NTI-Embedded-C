/* 10. Write a function to encode a string that is passed to it by refrence. 
The string should get converted into an unrecognizable form. 
[Hint: use masking technique to rotate right 3bits ] */

#include <stdio.h>

void encode(char *string);

int main(void)
{
    char str[20];
    printf("\nEnter the String:");
    gets(str);

    encode(str);
    printf("\nEncoded String : %s", str);


    return 0;
}

void encode(char *string)
{
    while (*string)
    {
        *string = *string - 30;
        string++;
    }
}
