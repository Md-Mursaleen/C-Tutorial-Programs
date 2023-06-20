#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = "Class of MAC";
    char str2[20];
    int i;
    i = 0;
    while (i <= 11)
    {
        str2[i] = str1[i];
        i = i + 1;
    }
    str2[i] = '\0';
    // strcpy(str2, str1);
    puts(str2);
    return 0;
}
