#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    printf("\n%d, %d", *x, *y);
    temp = *x;
    *x = *y;
    *y = temp;
    printf("\n%d, %d", *x, *y);
}
int main()
{
    int a = 5;
    int b = 10;
    printf("\n%d, %d", a, b);
    swap(&a, &b);
    printf("\n%d, %d", a, b);

    return 0;
}
