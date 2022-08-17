/* 4. Modified the previous code to detect duplicate even in mismatch letter case Input:
NTI is the Best, s=2, t=3, i=2, e =2. (Hint: first, convert input string to small case by using masking techniques) */

#include <stdio.h>

void count_repeated_characters(char *phrase);

int main(void)
{
    int i;
    char phrase[16]="NTI is the best";
    for (i = 0; i < 16; i++)
    {
        if (phrase[i] >= 65 && phrase[i] <= 90)
        {
            phrase[i] = phrase[i] + 32;
        }
    }
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
