#include <stdio.h>
#include <string.h>
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void actualreverstring(char str1[])
{
    int i;
    for (i = 0; i < strlen(str1) / 2; i = i + 1)
    {
        swap(&str1[i], &str1[strlen(str1) - 1 - i]);
    }
    puts(str1);
    // printf("%c",str1[strlen(str1)-i-1]);
}
int main()
{
    char str1[] = "MAC-1";
    puts(str1);
    actualreverstring(str1);
    printf("\n");
    puts(str1);
    return 0;
}
