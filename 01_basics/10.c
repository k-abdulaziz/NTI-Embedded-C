/*10. (Arithmetic) Write a program that asks the user to enter two numbers, obtains them from the user and 
prints their sum, product, difference, quotient and remainder.*/

#include <stdio.h>

int main(void)
{
    /* declaration of variables */
    int num1, num2;
    int sum, prod, dfrnc, qotnt, remdr;

    /* ask user for input */
    printf( "Enter number 1:");
    scanf("%d", &num1);
    printf( "Enter number 2:");
    scanf("%d", &num2);

    /* definition of arithmetic operations */
    sum = num1 + num2;
    prod = num1 * num2;
    dfrnc = num1 - num2;
    qotnt = num1 / num2;
    remdr = num1 % num2;

    /* display the results */
    printf("Sum = %d\nProduct = %d\nDifference = %d\n", sum, prod, dfrnc);
    printf("Quotient = %d\nRemainder = %d\n", qotnt, remdr);

    return 0;
}