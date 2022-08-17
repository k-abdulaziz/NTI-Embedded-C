/* 5. Write a code to find greatest common divisor of two numbers (iteratively). */

#include <stdio.h>

int main(void) {

    int num1, num2;
    printf("Enter 1st number:");
    scanf("%d", &num1);
    printf("Enter 2nd number:");
    scanf("%d", &num2);

    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 -= num2;
        }
        else
        {
            num2 -= num1;
        }
    }

    printf("GCD= %d", num1);

    return 0;
}
