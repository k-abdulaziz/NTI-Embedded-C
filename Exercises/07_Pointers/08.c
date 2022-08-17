/* 8. Write a C program to multiply two arrays, their references are stored in array of pointers? */

#include <stdio.h>

#define size 5

void multiply_2arrays(int *ptr1, int *ptr2);

int main(void) {

    int arr1[size] = {2, 5, 4, 3, -12};
    int arr2[size] = {-1, 8, 9, 0, 6};
    multiply_2arrays(arr1, arr2);
    return 0;
}

void multiply_2arrays(int *ptr1, int *ptr2)
{
    int i, sum[size];
    for (i = 0; i < size; i++)
    {
        sum[i] = *(ptr1+i) * *(ptr2+i);
    }
    for (i = 0; i < size; i++)
    {
        printf("%d\t",sum[i]);
    }
}
