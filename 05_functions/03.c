/* 3. Write a code to detect and print the duplicate characters in a given string? Input:
“Hello world” , l=3, o=2. Input: NTI is the Best, s=2, t=2, e =2. (T≠t, I≠i) */

#include <stdio.h>

void count_repeated_characters(char *phrase);

int main(void)
{
    char phrase[16]="NTI is the best";
    count_repeated_characters(phrase);
    return 0;
}

void count_repeated_characters(char *phrase)
{
    int i, j, count;
    char repeated;
    for (i = 0; i < 16; i++)
    {
        count = 1;
        /* use for-loop to compare each current element with coming ones */
        for (j = i + 1; j < 16; j++)
        {
            /* use if statement to check repeated elements */
            if (phrase[i] == phrase[j] && phrase[i] != ' ')
            {
                repeated = phrase[i];
                phrase[j] = 0;
                count++;
            }
        }

        if (count > 1 && phrase[i] != 0)
        {
            printf("%c = %d\t", repeated, count);
        }
    }
}
