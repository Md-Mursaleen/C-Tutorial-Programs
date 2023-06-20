#include <stdio.h>
int sum(int a, int b)
{
    return (a + b);
}
int main(void)
{
    int x = 5;
    int y = 10;
    printf("%d", sum(x, y));

    return 0;
}
