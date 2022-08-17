#include<stdio.h>

int main(void) {

    int a,b,c,d,e;
    int i;

    printf("Enter numbers:");
    scanf("%d, %d, %d, %d, %d", &a,&b,&c,&d,&e);

    for (i = 0; i < a; i++)
    {
        printf("*");
    }
    printf("\n");

    for (i = 0; i < b; i++)
    {
        printf("*");
    }
    printf("\n");

    for (i = 0; i < c; i++)
    {
        printf("*");
    }
    printf("\n");

    for (i = 0; i < d; i++)
    {
        printf("*");
    }
    printf("\n");

    for (i = 0; i < e; i++)
    {
        printf("*");
    }
    printf("\n");


/*    float num = 0;
    float max = 0;

    do {
        printf("Enter a number:");
        scanf("%f", &num);
        if (num > max) {
            max = num;
        }
    } while (num > 0);

    printf("Max= %.2f", max);

    return 0;*/

/*    int num, count = 0;
    printf("Enter number:");
    scanf("%d", &num);

    do {
        num /= 10;
        count++;
    } while (num != 0);

    printf("Number of digits: %d", count);*/


/*    int i, num, sum = 0;
    float avg;
    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d:", i);
        scanf("%d", &num);
        sum += num;
    }

    avg = (float) sum / 5;

    printf("Average = %.2f\n", avg);*/

}