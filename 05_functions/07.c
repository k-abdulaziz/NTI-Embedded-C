/* 7. Write a c program to print Fibonacci series without using recursion and using recursion. */

#include <stdio.h>

int fibo(int n);

int main(void)
{
    int recursive= 0, num,i;
    printf("enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("%d ", fibo(recursive));
        recursive++;
    }
    return 0;
}

int fibo(int n)
{
    if(n <= 1)
    {
        return n;
    }
    else
    {
        return (fibo(n-1) + fibo(n-2));
    }


/*    for (i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            printf("%d ", f0);
            continue;
        }
        if(i == 2)
        {
            printf("%d ", f1);
            continue;
        }
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
        printf("%d ", fn);
    }*/
}
