/* 7. Print a pattern of numbers from 1 to n as shown below. Each of the numbers is separated by a single space. */

#include <stdio.h>

int main(void)
{
    int i, j, n, min, size;
    printf("n:");
    scanf("%d", &n);
    size = 2 * n - 1;
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            min = i < j ? i : j;
            min = min < size - i ? min : size - i - 1;
            min = min < size - j - 1 ? min : size - j - 1;
            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}
