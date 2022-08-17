/* Indexing 2-D Array */

#include <stdio.h>

int main(void)
{
    int array[9][9]={0};
    int rows, cols;
    for (rows = 0; rows < 9; rows++)
    {
        for (cols = 0; cols < 9; cols++)
        {
            array[rows][cols] = rows * 10 + cols;
        }
    }

    for (rows = 0; rows < 9; rows++)
    {
        for (cols = 0; cols < 9; cols++)
        {
            printf("[%02d]", array[rows][cols]);
        }
        printf("\n");
    }
    return 0;
}