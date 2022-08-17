/* 5. Write a C program to find whether a given year is a leap year or not */

#include <stdio.h>

int main(void)
{
    /* definition of local variable */
    int year = 2022;
    /* check if not evenly divisible by 4 */
    if (year % 4 != 0)
    {
        printf("Not Leap year\n");
    }
    /* check if not evenly divisible by 100 */
    else if (year % 100 != 0)
    {
        printf("Leap year\n");
    }
    /* check if evenly divisible by 400 */
    else if (year % 400 == 0)
    {
        printf("Leap year\n");
    }
    /* if not evenly divisible by 400 */
    else
    {
        printf("Not Leap year\n");
    }
    return 0;
}
