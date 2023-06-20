#include <stdio.h>
int main(void)
{
    int x;
    printf("Enter the number:\n");
    scanf("%d", &x);
    if (x >= 90)
    {
        printf("the grade is 'A'\n");
    }
    else if (x >= 80)
    {
        printf("the grade is 'B'\n");
    }
    else if (x >= 70)
    {
        printf("the grade is 'C'");
    }
    else if (x >= 60)
    {
        printf("the grade is 'D'");
    }
    else
    {
        printf("the grade is 'E'");
    }
    return 0;
}
