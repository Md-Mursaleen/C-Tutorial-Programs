#include <stdio.h>
int main(void)
{
    int a[2][3];
    int i = 0;
    while (i <= 1)
    {
        int j = 0;
        while (j <= 2)
        {
            scanf("%d", &a[i][j]);
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i <= 1)
    {
        int j = 0;
        while (j <= 2)
        {
            printf("%d\t", a[i][j]);
            j = j + 1;
        }
        i = i + 1;
        printf("\n");
    }
    return 0;
}
