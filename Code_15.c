#include <stdio.h>
int main(void)
{
        int num, res;
        printf("Enter the number:\n");
        scanf("%d", &num);
        int i = 1;
        while (i <= 10)
        {
                num = num + 2;
                printf("%d ", num);
                i = i + 1;
        }
        return 0;
}
