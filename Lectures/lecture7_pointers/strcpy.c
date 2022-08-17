#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[100] = "AhmedMohamedAliSayedMahmoudOmar";
    char x[14];
    char *ptr = x;

    strcpy(ptr, src);
    printf("%s\n", src);
    printf("%s", ptr);
    return 0;
}