#include <stdio.h>
int main(void)
{
    for (int i = 0; i <= 10; i = i + 1)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d", i);
    }
    return 0;
}
