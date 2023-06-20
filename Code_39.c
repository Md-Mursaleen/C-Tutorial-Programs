#include <stdio.h>
int factorial(int x)
{
        if (x == 1)
        {
                printf("%d", x);
                return 1;
        }
        else
        {
                printf("%d *", x);
                return (x * factorial(x - 1));
        }
}
int main(void)
{
        int a;
        printf("Enter the number:\n");
        scanf("%d", &a);
        int p = factorial(a);
        printf("= %d", p);

        return 0;
}
