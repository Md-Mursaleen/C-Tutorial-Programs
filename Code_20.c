#include <stdio.h>
int main(void)
{
    int i;
    i = 0;
    int a[4];
    while (i <= 3)
    {
        a[i] = i;
        i = i + 1;
    }
    i = 0;
    while (i <= 3)
    {
        printf("%d ", a[i]);
        i = i + 1;
    }

    return 0;
}
