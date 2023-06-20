#include <stdio.h>
int main(void)
{
    int i = 1;
    while (1)
    {
        printf("%d ", i);
        i = i + 1;
        if (i == 10)
        {
            break;
        }
    }
    return 0;
}
