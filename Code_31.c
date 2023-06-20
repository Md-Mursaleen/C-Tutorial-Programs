#include <stdio.h>
int swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\n%d %d", x, y);
    return 0;
}
int main(void)
{

    int a = 5;
    int b = 10;
    printf("%d %d", a, b);
    swap(a, b);
}
