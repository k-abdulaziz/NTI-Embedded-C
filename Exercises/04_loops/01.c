/* 1. Write a c code to print prime numbers */

#include <stdio.h>

int main(void) {

    int i, j, n, count; /* declaration of local variables */
    /* Ask user to input the range of prime numbers */
    printf("Print prime numbers between 1 and?");
    scanf("%d", &n);

    /* execute loop from 2 to n */
    for (i = 2; i <= n; i++)
    {
        count = 0; /* reset count */
        for(j = 1; j <= i; j++) /* execute loop from 1 until i */
        {
            if(i % j == 0) /* check if i is dividable by j */
            {
                count++;
            }
        }

        if(count == 2) /* check if count equals 2 */
        {
            printf("%d ", i);
        }
    }
    return 0;
}
