#include <stdio.h>
int main(void)
{
    int sum = 0;
    for (int i = 2; i <= 100; sum = sum + i, i = i + 2, printf("%d ", sum))
    {
    }
    return 0;
}
