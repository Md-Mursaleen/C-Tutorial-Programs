#include <string.h>
#include <stdio.h>
int main(void)
{
    char str1[20] = "Mursaleen", str2[] = "Mursaleen", str3[] = "akash";
    int result;
    result = strcmp(str1, str2);

    printf("%d", result);
    result = strcmp(str1, str3);

    printf("\n%d", result);
    return 0;
}
