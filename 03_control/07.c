/* 7. Write a C program to accept the height of a person in centimeter and categorize the person according to their height. */

#include <stdio.h>

int main(void)
{
    short height; /* Variable declaration */

    /* ask user to input height */
    printf("Enter Height:");
    scanf("%d", &height);

    /* check if height is less than 150 cm */
    if (height < 150)
    {
        printf("Dwarf\n");
    }

    /* check if height is less than 165 cm */
    else if (height < 165)
    {
        printf("Average\n");
    }

    /* check if height is greater than 165 cm */
    else
    {
        printf("Tall\n");
    }

    return 0;
}
