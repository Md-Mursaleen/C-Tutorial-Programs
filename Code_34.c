#include <stdio.h>

void sum(int *x, int *y, int *j)
{
    *j = *x + *y;
    printf("\n%d, %d", *x, *y);
}
int main()
{
    int a = 5;
    int b = 10;
    int *p;
    sum(&a, &b, p);
    printf("\n%d, %d %d", a, b, *p);

    return 0;
}
