#include <stdio.h>
int f(int x)
{

    return (x + 2);
}
int main(void)
{
    int a = 5;
    int p;
    p = f(a);
    printf("%d %d", a, p);
    return 0;
}
