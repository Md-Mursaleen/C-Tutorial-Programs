#include <stdio.h>
#include <string.h>
int main()
{
    char source[] = " Gupta Kumar";
    char target[] = "Anand";
    char *ptr1, *ptr2;
    int ctr = 1;
    ptr1 = source;
    ptr2 = target;
    while (*ptr2 != '\0')
    {
        printf("%c", *ptr2);
        ptr2 = ptr2 + 1;
    }
    while (*ptr1 != '\0')
    {
        if (ctr > 6)
            break;
        printf("%c", *ptr1);
        ptr1 = ptr1 + 1;
        ctr = ctr + 1;
    }
}
