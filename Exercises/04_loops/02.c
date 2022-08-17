/* 2. Given a five digit integer, print the sum of its digits. */

#include <stdio.h>

int main(void) {

    int num, sum = 0;
    /* ask user to input a number */
    printf("Enter a 5 digit number:");
    scanf("%5d", &num);

    /* loop until number is zero */
    while (num != 0)
    {
        /* add sum to remainder of number over 10 */
        sum = sum + num % 10;
        /* assign number to its division over 10 */
        num = num / 10;
    }
    /* display the sum of the digits */
    printf("Number of digits: %d", sum);

    return 0;
}
