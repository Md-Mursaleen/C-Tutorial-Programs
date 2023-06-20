#include <stdio.h>
int main()
{
    int r = 1, p;
    p = ((r++) + (++r) + (++r));
    printf("%d %d", r, p);
    return 0;
}
