#include <stdio.h>
int main(void)
{
    register int a;
    for (a = 0; a < 10; a = a + 1)
    {
        printf("%d\t", a + 1);
    }
    return 0;
}
