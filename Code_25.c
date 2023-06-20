#include <stdio.h>
int main(void)
{
    int *p, *q;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    p = &a[0];
    q = &a[7];

    printf("%d ", *p - *q);
    return 0;
}
