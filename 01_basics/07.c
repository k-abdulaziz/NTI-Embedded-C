/*7. Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then 
displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns, and diagonals:
Enter the numbers from 1 to 16 in any 
order: 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1 
Output: 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1 
Row sums: 34 34 34 34 Column sums: 34 34 34 34 Diagonal sums: 34 34*/

#include <stdio.h>

int main(void)
{
    int x1,x2,x3,x4,x5,x6,x7,x8,x9;
    int x10,x11,x12,x13,x14,x15,x16;

    printf("Enter the numbers from 1 to 16 in any order:");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
          &x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9,&x10,&x11,&x12,&x13,&x14,&x15,&x16);

    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",
           x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16);

    printf("Row sums: %d %d %d %d\n",(x1+x2+x3+x4), (x5+x6+x7+x8) ,
           (x9+x10+x11+x12),(x13+x14+x15+x16));

    printf("Column sums: %d %d %d %d\n",(x1+x5+x9+x13), (x2+x6+x10+x14) ,
           (x3+x7+x11+x15),(x4+x8+x12+x16));

    printf("Diagonal sums: %d %d\n",(x1+x6+x11+x16), (x4+x7+x10+x13));

    return 0;
}