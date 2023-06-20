#include <stdio.h>
int main(void)
{
    for (int i = 1;; i = i + 1)
    {
        printf("%d ", i);
        if (i == 10)
        {
            break;
        }
    }
    return 0;
}
