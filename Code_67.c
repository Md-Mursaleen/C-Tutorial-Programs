#include <stdio.h>
#include <conio.h>
#define EOF (-1)
int main(void)
{
    FILE *fp;
    char ch;
    fp = fopen("abc.txt", "w");
    while ((ch = getchar()) != EOF)
    {
        putc(ch, fp);
    }
    fclose(fp);
    fp = fopen("abc.txt", "r");
    printf("The file data is....\n");
    while (ch = getc(fp) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}
