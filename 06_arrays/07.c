/* 7. Write a program fragment that declares an 5 x 5 char array named 
checker board and then uses a loop to store the following data into 
the array (one character per array element). */

#include <stdio.h>

int main(void)
{
    char checker[5][5]= {0};
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if((i+j) % 2 == 0)
            {
                checker[i][j] = 'B';
            }
            else
            {
                checker[i][j] = 'R';
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%c ", checker[i][j]);
        }
        printf("\n");
    }
    return 0;
}
