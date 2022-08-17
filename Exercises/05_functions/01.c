/* 1. Write C program to copy one array to another using function. */

#include <stdio.h>

void copy_array(int *array, int *new_array);

int main(void)
{
    int i, array[10], new_array[10];

    for (i = 0; i < 10; i++)
    {
        printf("Enter element-%d:", i);
        scanf("%d", &array[i]);
    }

    copy_array(array,new_array);
    return 0;
}

void copy_array(int *array, int *new_array)
{
    int i;
    printf("Original Array: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nCopied Array: ");
    for (i = 0; i < 10; i++)
    {
        new_array[i] = array[i];
        printf("%d ", new_array[i]);
    }
}
