#include <stdio.h>
#include <conio.h>

struct
{
    char name[60];
} c;

void print_rec(char[]);
int main()
{
    char ans;
    do
    {
        printf("Enter Details...\n");
        scanf("%s", c.name);
        print_rec(c.name);
        printf("Do you want to Enter more...\n");
        ans = getch();
    } while ((ans == 'Y') || (ans == 'y'));

    return 0;
}
void print_rec(char n[])
{
    printf("Following records entered...\n");
    printf("%s ", n);
}
