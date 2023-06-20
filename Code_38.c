#include <stdio.h>
void pattern(int a);

int main()
{
    int k;
    for (k = 2; k <= 5; k = k + 1)
    {
        pattern(k);
        printf("\n");
    }
    return 0;
}
void pattern(int x)
{
    int i;
    for (int i = 1; i < 6; ++i)
    {
        printf("%d\t", x * i);
    }
}
