/* 6. Write a C program to perform linear search on random array. */

#include <stdio.h>

#define size 10

int main()
{
    int array[size];
    int i, num, flag = 0;
    printf("Enter the array values\n");
    for (i = 0; i < size; i++)
    {
        printf("Enter element %d:", i);
        scanf("%d", &array[i]);
    }

    int count = 0;
    printf("\nEnter the value to search for:");
    scanf("%d", &num);

    /* use for-loop to let user enter array elements 1-by-1 */
    for (i = 0; i < size; i++)
    {
        /* check if array element same as value */
        if (array[i] == num)
        {
            flag = 1;
            printf("located at array[%d]\n", i);
            count++;
        }
    }

    if (flag == 0)
    {
        printf("%d is not found in the array!\n", num);
    }
    else
    {
        printf("%d is repeated %d times in the array\n", num, count);
    }

    return 0;
}
