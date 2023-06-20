#include <stdio.h>
int main(void)
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int i = 0;
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
}
