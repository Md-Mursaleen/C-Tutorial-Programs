#include <stdio.h>
int main(void)
{
    int x = 25;
    int *p;
    p = &x;
    *p = *p + 1;
    printf("%d ", x);

    return 0;
}
