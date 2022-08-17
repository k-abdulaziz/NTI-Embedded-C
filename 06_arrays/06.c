/* 6. Given five positive integers, find the minimum and maximum values that can be 
calculated by summing exactly four of the five integers. Then print the respective 
minimum and maximum values as a single line of two space-separated long integers. */

#include <stdio.h>
#include <string.h>

int main()
{
    char array[5] = {1,3,5,7,9};
    int min = 0;
    int max = 0;
    int i, sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum += array[i];
        if (array[i] < min)
        {
            min = array[i];
        }
        else if (array[i] > max)
        {
            max = array[i];
        }
    }

    printf("Max Sum = %d, Min Sum = %d", sum-max, sum-min);
    return 0;
}
