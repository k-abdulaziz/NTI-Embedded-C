#ifndef POINTERS_HEADER_H
#define POINTERS_HEADER_H
#include <stdint.h>
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpragma-pack"
#pragma pack(push)
#pragma pack(1)
typedef struct birthday
{
    uint16_t day;
    uint16_t month;
    uint16_t year;
}Date;

typedef struct students
{
    uint8_t name[25];
    uint16_t ID;
    uint8_t grade[3];
    uint8_t gender;
    Date birthday;
}Student;

#endif //POINTERS_HEADER_H
