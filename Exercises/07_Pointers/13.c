/* 13. Find out (add code to print out) the address of the variable x in foo1, 
and the variable y in foo2. What do you notice? Can you explain this? */

#include <stdio.h>
void foo1(int xval) 
{
	int x; 
	x = xval; 
	/* print the address and value of x here */ 
} 
void foo2(int dummy) 
{
	int y; 
	/* print the address and value of y here */ 
}
 
int main() 
{
	foo1(7);
	foo2(11); 
	return 0; 
} 

Display address and value of xval and dummy?

- The addresses of x and y are the same and that’s because when foo1 is called, it store x in 
a memory location and when return it freed it up then foo2 is called and store y in the same memory location.

#include <stdio.h>

void foo1(int xval) {
    int *x;
    x = &xval; /* print the address and value of x here */
    printf("x = %d, address of x is %p", *x, x);
}
void foo2(int dummy) {
    int *y; /* print the address and value of y here */
    y = &dummy;
    printf("\ny = %d, address of y is %p", *y, y);
}
int main()
{
    foo1(7);
    foo2(11);

    return 0;
}
