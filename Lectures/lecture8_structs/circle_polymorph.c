/*#include <stdio.h>

#define PI 3.14159265359

void c_circum(float a)
{
    printf("Circumference = %.2f", PI * a);
}

void c_area(float a)
{
    printf("Area = %.2f", PI * a * a);
}

int main(void)
{
    unsigned int choice; float radius;
    void (* ptr_fun[]) (float) = {c_circum, c_area};
    printf("Enter the circle radius:");
    scanf("%f", &radius);
    printf("Enter 0 to calculate circumference or 1 to calculate area:");
    scanf("%d", &choice);
    if (choice > 1)
    {
        printf("Invalid Input\n");
    }
    else
    {
        ptr_fun[choice] (radius);
    }

    return 0;
}*/
