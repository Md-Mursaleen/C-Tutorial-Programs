#include <stdio.h>
void printstr(char a[])
{
    printf("\n%s", a);
}
int main()
{
    char a[] = "Mac-2021";
    printf("%s", a);

    printf("\n");
    scanf("%s", a);
    printstr(a);

    return 0;
}
