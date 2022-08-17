/* 2. Write a function that takes an integer and returns the sum of its digits.
For example, given the number 7631, the function should return 17. */

#include <stdio.h>

int sum_digits(int num);

int main(void)
{
    int num, sum;
    printf("Enter a number:");
    scanf("%d", &num);
    sum = sum_digits(num);
    printf("Sum of digits in %d = %d\n", num, sum);
    return 0;
}

int sum_digits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        /* add sum to remainder of number over 10 */
        sum = sum + num % 10;
        /* assign number to its division over 10 */
        num = num / 10;
    }
    return sum;
}
