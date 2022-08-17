/*------------------1st option-----------------*/

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter 3-digit number:");
    scanf("%1d%1d%1d", &num1, &num2, &num3);
    printf("The reversal = %d%d%d", num2, num3, num1);
    return 0;
}

/*------------------2nd option-----------------*/

/*#include <stdio.h>

int main()
{
    *//* declaration of local variables *//*
    int num, n1, n2, n3, reversed;
    *//* ask user ton input number *//*
    printf("Enter any number to find reverse: ");
    scanf("%d", &num);
    n1 = num % 10; num = num / 10; *//* get first digit of the number *//*
    n2 = num % 10; num = num / 10; *//* get second digit of the number *//*
    n3 = num % 10;                 *//* get second digit of the number *//*
    reversed = n2 * 100 + n1 * 10 + n3; *//* multiply first number by 100 to put in 3rd place and so on...*//*
    printf("The reversal = %d", reversed); *//* display reversed number *//*
    return 0;
}*/

