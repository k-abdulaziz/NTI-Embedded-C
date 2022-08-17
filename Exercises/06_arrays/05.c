/* 5. Write a c code to count and sum negative elements in array 
Example: array={1,-5,-8,6,-3,4} Count = 3 , sum = -16 */

#include <stdio.h>

int main(void)
{
    int array[] = {1,-5,-8,6,-3,4};
    const int size = sizeof(array) / sizeof(array[0]);
    int i, sum = 0, count = 0;
    /* loop to check every element of array */
    for (i = 0; i < size; i++)
    {
        /* check if element's value is negative */
        if (array[i] < 0)
        {
            sum += array[i]; /* add the value to sum */
            count++; /* increment the count */
        }
    }
    printf("count= %d, sum = %d", count, sum);
    return 0;
}
