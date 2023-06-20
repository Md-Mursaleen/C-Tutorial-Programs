#include <stdio.h>
int main(void)
{
    int a;
    a = 4;
    int p = &a;
    printf("%d\n", a);
    printf("the address of a is %d", p);

    return 0;
}
