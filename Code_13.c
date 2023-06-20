#include <stdio.h>
int main(void)
{
    int n, tab;
    printf("Enter the number:\n");
    scanf("%d", &n);
    int i = 1;
    while (i <= 10)
    {
        tab = n * i;
        printf("%d * %d =%d\n", n, i, tab);
        i = i + 1;
    }
    return 0;
}
