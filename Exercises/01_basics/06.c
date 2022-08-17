/*6. Write a program that prompts the user to enter a telephone number in the 
form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxx: 
Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900 You entered 404.817.6900*/

#include <stdio.h> /* include the standard library */

int main(void)
{
    int x, y, z; /* declaration of local variables */
    /* ask user to input the number as the format shown below */
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    /* reads the input numbers and stores it at x, y and z */
    scanf("(%d) %d-%d", &x, &y, &z);
    /* prints the three numbers separated with dot */
    printf("%d.%d.%d", x, y, z);
}