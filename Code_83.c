#include <stdio.h>
int main(void)
{
    int a = 3, b;
    b = (++a);
    printf("%d %d", a, b);
    return 0;
}
