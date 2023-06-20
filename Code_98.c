#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp;
    char name[15] = "Anand Gupta";
    fp = fopen("abc.txt", "w");
    fputs(name, fp);
    fputs(name, fp);
    fclose(fp);
    fp = fopen("abc.txt", "r+");
    fgets(name, 12, fp);
    printf("%s", name);
    fgets(name, 5, fp);
    printf("\n%s", name);
    fclose(fp);
    getch();
    return 0;
}
