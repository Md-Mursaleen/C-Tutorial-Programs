#include <stdio.h>
int main(void)
{
    int num, res, res1;
    printf("Enter the number:\n");
    scanf("%d", &num);
    res = (num >= 90 ? "your grade is 'A'" : "your grade is 'B'");
    printf("%s", res);
    res1 = (num >= 70 ? "Your grade is 'C'" : "Your grade is 'D'");
    printf("%s", res1);
    return 0;
}
