#include <stdio.h>
int main(void)
{
    int a = 1, b;
    b = ((++a) + (++a));
    printf("%d %d", a, b);
    return 0;
}
