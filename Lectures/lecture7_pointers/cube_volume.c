#include <stdio.h>

void cube_volume(const int *length, int *volume);

int main()
{
    int length, volume; /* declaration of local variable */
    printf("Enter the length:");  /* ask user to input length */
    scanf("%d", &length); /* get the input and store at length */
    /* calling the function using address of length and volume */
    cube_volume(&length, &volume);
    printf("Volume = %d", volume); /* display the volume */

    return 0;
}
/* function take inputs of length and volume as pointers */
void cube_volume(const int * length, int *volume)
{
    /* multiply the value of length 3 times and assign to the value of volume */
    *volume = (*length) * (*length) * (*length);
}