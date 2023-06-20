#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[20] = "MAC 2021";
    char str2[10];
    strcpy(str2, str1);
    puts(str2);
    return 0;
}
