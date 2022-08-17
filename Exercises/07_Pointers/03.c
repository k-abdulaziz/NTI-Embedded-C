/* 2. Write a C program to swap two arrays using pointers (XOR). */

#include <stdio.h>

#define size 5

void swap_array(int *arr_ptr, int *new_arr_ptr);

int main(void)
{
    int i, array[size], new_array[size];
    /* loop to initialize both array */
    printf("1st-Array\n");
    for (i = 0; i < size; i++)
    {
        printf("Enter element-%d:", i);
        scanf("%d", &array[i]);
    }
    printf("2nd-Array\n");
    for (i = 0; i < size; i++)
    {
        printf("Enter element-%d:", i);
        scanf("%d", &new_array[i]);
    }

    /* call function to copy array to new_array */
    swap_array(&array[0], &new_array[0]);
    /* display initialized array */
    printf("1st-Array\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    /* display the copied array */
    printf("\n2nd-Array\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", new_array[i]);
    }

    return 0;
}

/* function definition */
void swap_array(int *arr_ptr, int *new_arr_ptr)
{
    int i;
    for (i = 0; i < size; i++)
    {
        /* swap pointers using xor */
        *arr_ptr = (*arr_ptr) ^ (*new_arr_ptr);
        *new_arr_ptr = (*arr_ptr) ^ (*new_arr_ptr);
        *arr_ptr = (*arr_ptr) ^ (*new_arr_ptr);
        arr_ptr++;  /* increment the pointer (point at next element) */
        new_arr_ptr++;  /* point at next element */
    }
}
