/* 12. Given an array of integers and a positive integer k, determine the number 
of (i, j) pairs where i < j and ar[i] + ar[j] is divisible by k. */

#include <stdio.h>

int main(void)
{
    int array[] = {1, 2, 3, 4, 5, 6};
    const int size = sizeof(array) / sizeof(array[0]);
    int i, j, k = 5;
    /* loop to check every element of array */
    for (i = 0; i < size; i++)
    {
        /* check every element with its succeeding elements */
        for (j = i + 1; j < size; j++)
        {
            /* check if the sum of two elements is divisible by k */
            if ((array[i]+ array[j]) % k == 0)
            {
                /* display the pair if true */
                printf("(%d,%d)\n", array[i], array[j]);
            }
        }
    }
    return 0;
}
