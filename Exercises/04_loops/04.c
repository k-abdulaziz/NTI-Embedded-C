/* 4. Write a program in C to display the multiplication table for given number n. */

#include <stdio.h>

int main(void) {

    int i, num, mult;
    printf("Multiplication table of:");
    scanf("%d", &num);
    for (i = 1; i <= 12 ; i++)
    {
        mult = i * num;
        printf("%d x %d = %d\n", i, num, mult);
    }
    return 0;
}
