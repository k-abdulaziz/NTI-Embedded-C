/* 1. Write C program to copy one array to another using function and pass by ref. */

#include <stdio.h>

#define size 10

void copy_array(int *arr_ptr, int *new_arr_ptr);

int main(void)
{
    int i, array[size], new_array[size];
    /* loop to initialize array */
    for (i = 0; i < size; i++)
    {
        printf("Enter element-%d:", i);
        scanf("%d", &array[i]);
    }
    /* call function to copy array to new_array */
    copy_array(&array[0], &new_array[0]);
    /* display initialized array */
    printf("Original Array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    /* display the copied array */
    printf("\nCopied Array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", new_array[i]);
    }

    return 0;
}

/* function definition */
void copy_array(int *arr_ptr, int *new_arr_ptr)
{
    int i;
    for (i = 0; i < size; i++)
    {
        /* copy the value of first element of array to first element in new_array */
        *new_arr_ptr = *arr_ptr;
        arr_ptr++; /* increment the pointer (point at next element) */
        new_arr_ptr++; /* point at next element */
    }
}
