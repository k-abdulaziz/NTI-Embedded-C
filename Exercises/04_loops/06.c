/* 6. (Bar-Chart Printing Program) One interesting application of computers is drawing graphs and bar charts.
Write a program that reads five numbers (each between 1 and 30). For each number read, your program should
print a line containing that number of adjacent asterisks. */

#include <stdio.h>

int main(void) {

    int i, j, n;

    for (i = 0; i < 5; i++)
    {
        printf("n:");
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
