/* 3. Given an array of integers, calculate the ratios of its elements that are positive,
 negative, and zero. Print the decimal value of each fraction on a new line with places after the decimal. */

#include <stdio.h>

int main(void)
{
    int array[] = {1, 1, 0, -1, -1};
    const int size = sizeof(array) / sizeof(array[0]);
    int i;
    float positives = 0;
    float zeros = 0;
    float negatives = 0;
    for (i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            positives++;
        }
        else if(array[i] == 0)
        {
            zeros++;
        }
        else
        {
            negatives++;
        }
    }
    printf("%f\n", positives/size);
    printf("%f\n", zeros/size);
    printf("%f\n", negatives/size);
    return 0;
}
