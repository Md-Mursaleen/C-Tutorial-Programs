#include <stdio.h>
int main(void)
{
    int i;
    i = 0;
    int a[10];
    while (i < 10)
    {
        a[i] = i;
        i = i + 1;
    }
    i = 9;
    while (i >= 0)
    {
        printf("%d ", a[i]);
        i = i - 1;
    }
    return 0;
}
