/* 5. Write a recursive function power(base, exponent) that when invoked returns baseexponent For example,
power (3, 4) = 3 * 3 * 3 * 3. Assume that exponent is an integer greater than or equal to 1. */

#include <stdio.h>

int recursive_power(int x, int y);

int main(void)
{
    int num, power;
    printf("Enter Base:");
    scanf("%d", &num);
    printf("Enter Power:");
    scanf("%d", &power);
    printf("%d",recursive_power(num,power));
    return 0;
}

int recursive_power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * recursive_power(base, exponent-1);
    }
}
