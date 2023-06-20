#include <stdio.h>
int main(void)
{
    int a[5];
    int i = 0;
    while (i < 5)
    {
        scanf("%d", &a[i]);
        i = i + 1;
    }
    i = 4;
    while (i >= 0)
    {
        printf("%d ", a[i]);
        i = i - 1;
    }
    return 0;
}
