8. Write a c program to draw different next patterns.
#include <stdio.h>

int main(void)
{
    int i, j;
    /* ---------1--------- */
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if(j < i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }

        }
        printf("\n");
    }

    printf("\n");
    
    /* ---------2--------- */
    for (i = 0; i < 5; i++)
    {
        for (j = 5; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    /* ---------3--------- */
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i + j < 4)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    printf("\n");
    
    /* ---------4--------- */
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
