#include <stdio.h>

/*long dec_to_bin(int dec_num);*/
int nth_digit(int num, int dig_no);
/*int itr_fact(int num);
int rcr_fact(int num);*/

int main(void)
{
    int result = nth_digit(1012,4);
    printf("%d", result);

    /*long result = dec_to_bin(10);*/
    /*int result = itr_fact(4);
    int result1 = rcr_fact(2);*/

/*    int i, array[10];
    printf("Element:\t Value:\n");
    for(i = 0; i < 10; i++)
    {
        array[i]= (2*i)+2;
        printf("%d\t\t %d\n", i, array[i]);
    }*/
    return 0;
}

/*
int itr_fact(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int rcr_fact(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return (num * rcr_fact(num-1));
    }
}
*/

int nth_digit(int num, int dig_no)
{
    int i, rem;
    for (i = 0; i < dig_no; i++)
    {
        rem = num % 10;
        num = num / 10;
    }
    return rem;
}

/*long dec_to_bin(int dec_num)
{
    long bin_num = 0;
    int rem, fact = 1;
    while (dec_num != 0)
    {
        rem = dec_num % 2;
        bin_num = bin_num + rem * fact;
        fact = fact * 10;
        dec_num = dec_num / 2;
    }
    return bin_num;
}*/