#include <stdio.h>
int main(void)
{
    auto int a;
    printf("Outer block..%d", a);
    {
        auto int a;
        printf("\nInner block...%d", a);
    }
    printf("\n%d", a);
    return 0;
}
