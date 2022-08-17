/* 4. Write a C program to concatenate two strings using pointers. */

#include <stdio.h>

int main() {
    char str1[20];
    char str2[20];
    char *s1ptr = str1; /* pointer to string */
    char *s2ptr = str2;
    
    printf("Enter First String:");
    gets(str1);
    printf("Enter Second String:");
    gets(str2);

    while(*s1ptr) /* move until pointer reaches null */
    {
        s1ptr++; /* move pointer to next character */
    }
    while(*s2ptr) /* move until pointer reaches null */
    {
        *s1ptr = *s2ptr; /* copy character of str2 into str1 */
        s1ptr++;
        s2ptr++;
    }
    *s1ptr = '\0'; /* end with Null */
    printf("Result: %s\n", str1);
    return 0;
}
