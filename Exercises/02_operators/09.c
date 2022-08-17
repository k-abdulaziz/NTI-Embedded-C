#include <stdio.h>

int main(void)
{
    int inserted = 0x11223344;
    int converted = 0;

    converted |= (inserted & 0x000000FF) << 24; /* move LSB to MSB */
    converted |= (inserted & 0x0000FF00) << 8; /* move 2nd LSB to 2nd MSB */
    converted |= (inserted & 0x00FF0000) >> 8; /* move 2nd MSB to 2nd LSB */
    converted |= (inserted & 0xFF000000) >> 24; /* move MSB to LSB */

    printf("0x%x\n", converted);

    return 0;
}
