/* 5. Write a code to find greatest common divisor of two numbers (iteratively): 
Using functions and pass by reference technique. */

#include <stdio.h>

void gcd(int *num1, int *num2);

int main(void) {

    int n1, n2; /* variables declaration */
    /* ask user to input numbers */
    printf("Enter 1st number:");
    scanf("%d", &n1);
    printf("Enter 2nd number:");
    scanf("%d", &n2);
    gcd(&n1, &n2); /* calling function */
    return 0;
}

/* gcd function definition */
void gcd(int *num1, int *num2)
{
    /* loop until both equal other */
    while (*num1 != *num2)
    {
        if (*num1 > *num2) /* check if num1 greater than num 2 */
        {
            *num1 -= *num2; /* subtract num2 from num1 */
        }
        else
        {
            *num2 -= *num1; /* subtract num1 from num2 */
        }
    }
    /* print num1 which is the gcd */
    printf("GCD = %d", *num1);
}
