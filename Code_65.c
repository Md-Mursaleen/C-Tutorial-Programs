#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp;
    char ch;
    fp = fopen("abc.txt", "w");
    while (ch = getchar() != EOF)
    {
        putc(ch, fp);
    }
    fclose(fp);
    fp = fopen("abc.txt", "r");
    while ((ch = getc(fp)) != EOF)
        printf("%c", ch);
    fclose(fp);

    return 0;
}
