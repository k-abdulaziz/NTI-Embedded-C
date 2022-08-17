/* 2. Given an array of integers, where all elements but one occur twice, find the unique element. */

/*          ALGORITHM
*   = X ^ Y ^ Z ^ A ^ Z ^ Y ^ X
*   = X ^ X ^ Y ^ Y ^ Z ^ Z ^ A
*   =   0   ^   0   ^   0   ^ A
*   =       0   ^   A 
*   =           A                 
*/

#include <stdio.h>

int main(void)
{
    /* array initialization */
    int array[] = {4,3,2,1,2,3,4};
    const int size = sizeof(array) / sizeof(array[0]); /* calculate size of array as a constant */
    int i, unique = 0; /* definition of local variables */
    /* loop  */
    for (i = 0; i < size; i++)
    {
        unique ^= array[i]; /* A XOR 0 = A, A XOR A = 0 */
    }
    printf("unique number is %d", unique);
    return 0;
}
