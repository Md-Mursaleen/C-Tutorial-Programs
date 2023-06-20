#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp;
    int n, i;
    fp = fopen("abc.txt", "w");
    for (i = 0; i < 10; i = i + 2)
    {
        putw(i + 2, fp);
    }
    fclose(fp);
    fp = fopen("abc.txt", "r");
    printf("The file data is...\n");
    while ((n = getw(fp)) != EOF)
    {
        printf("%d\t", n);
    }
    fclose(fp);
    return 0;
}
