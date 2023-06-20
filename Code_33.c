#include <stdio.h>
int f(int *p)
{
    *p = *p + 1;
    printf("\n%d", *p);
    return 0;
}
int main(void)
{
    int a = 5;
    printf("%d", a);
    f(&a);
    printf("\n%d", a);
}
