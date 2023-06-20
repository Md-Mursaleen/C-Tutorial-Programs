#include <stdio.h>
#include <string.h>
void reverstring(char str1[])
{
    int i;
    for (i = 0; i < strlen(str1); i = i + 1)
        printf("%c", str1[strlen(str1) - i - 1]);
}
int main()
{
    char str1[] = "MAC-1";
    reverstring(str1);
    return 0;
}
