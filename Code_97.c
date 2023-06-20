#include <stdio.h>
#include <conio.h>
int main(void)
{
    FILE *ptr;
    char name[] = "Md Mursaleen";
    ptr = fopen("abc.txt", "w");
    fputs(name, ptr);
    fputs(name, ptr);
    fclose(ptr);
    fopen("abc.txt", "r+");
    fgets(name, 13, ptr);
    printf("%s", name);
    fclose(ptr);
    getch();
    return 0;
}
