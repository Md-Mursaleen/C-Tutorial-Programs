#include <stdio.h>
int main(void)
{
    int a[3] = {1, 2, 3};
    int b[4] = {3, 4, 5, 6};
    int *x, *y;
    x = &a[2];
    y = &b[3];
    printf("%d\n", *y - *x);
    return 0;
}
