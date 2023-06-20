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
    i = 1;
    int lag;
    lag = a[0];
    while (i < 5)
    {
        if (lag < a[i])
        {
            lag = a[i];
            i = i + 1;
        }
    }
    printf("%d ", lag);

    return 0;
}
