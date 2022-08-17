#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[100];
    char alphabets[26]={0};
    int i, flag = 0;
    printf("Enter string:");
    gets(string);

    for (i = 0; strlen(string); i++)
    {
        if (string[i] > 97)
        {
            alphabets[string[i] - 97] = 1;
        }
        else if (string[i] > 65)
        {
            alphabets[string[i] - 65] = 1;
        }
        else
        {
            continue;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if(alphabets[i] == 0)
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        printf("NOT A PANGRAM");
    }

    else
    {
        printf("PANGRAM");
    }

    return 0;
}
