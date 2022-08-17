#include <stdio.h>
#include "header.h"

int main(void)
{
    /*Student student1 = {"Ahmed Mohamed", 966, "H2", 'M', {29,5,2005}};*/
/*    Student *ptr_student = &student1;*/
    int i;
    Student student_table[6] = {0};
    Student *ptr_student = student_table;

    for (i = 0; i < 6; i++)
    {
        printf("Insert DATA of student[%d]\n", i+1);
        if (i == 0 || i == 1)
        {
            printf("Insert name:", student_table[i].name);
            scanf("%s", student_table[i].name);
            printf("Insert ID:");
            scanf("%hd", &student_table[i].ID);
            printf("Insert grade:");
            scanf("%s", student_table[i].grade);
            printf("Insert gender:");
            scanf(" %c", &student_table[i].gender);
            printf("Insert day/month/year birthday:");
            scanf("%hd/%hd/%hd", &student_table[i].birthday.day,
                  &student_table[i].birthday.month, &student_table[i].birthday.year);
        }

        else if (i == 2 || i == 3)
        {
            printf("Insert name:");
            scanf("%s", (*(ptr_student+i)).name);
            printf("Insert ID:");
            scanf("%hu", &(*(ptr_student+i)).ID);
            printf("Insert grade:");
            scanf("%s", (*(ptr_student+i)).grade);
            printf("Insert gender:");
            scanf(" %c", &(*(ptr_student+i)).gender);
            printf("Insert day/month/year birthday:");
            scanf("%hd/%hd/%hd", &(*(ptr_student+i)).birthday.day,
                  &(*(ptr_student+i)).birthday.month, &(*(ptr_student+i)).birthday.year);
        }

        else if (i == 4 || i == 5)
        {
            printf("Insert name:");
            scanf("%s", (ptr_student+i)->name);
            printf("Insert ID:");
            scanf("%hu", &(ptr_student+i)->ID);
            printf("Insert grade:");
            scanf("%s", (ptr_student+i)->grade);
            printf("Insert gender:");
            scanf(" %c", &(ptr_student+i)->gender);
            printf("Insert day/month/year birthday:");
            scanf("%hd/%hd/%hd", &(ptr_student+i)->birthday.day,
                  &(ptr_student+i)->birthday.month, &(ptr_student+i)->birthday.year);
        }
    }

    for (i = 0; i < 6; i++)
    {
        printf("\nDATA of student[%d]\n", i+1);
        printf("Name: %s\n", student_table[i].name);
        printf("ID: %d\n", student_table[i].ID);
        printf("Grade: %s\n", student_table[i].grade);
        printf("Gender: %c\n", student_table[i].gender);
        printf("Birthday: %hd/%hd/%hd\n", student_table[i].birthday.day,
               student_table[i].birthday.month, student_table[i].birthday.year);
    }

    return 0;
}

