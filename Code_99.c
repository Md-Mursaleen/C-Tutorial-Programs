#include <stdio.h>
int add()
{
    int a = 5;
    auto int b = 7;
    return (a + b);
}

int main()
{
    printf("\nSummation is..%d", add());
    return 0;
}
