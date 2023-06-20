#include <stdio.h>
#include <string.h>
int main()
{
    char name[30];
    char name1[30];
    printf("Enter Person1 name: ");
    gets(name);
    printf("Enter Person2 name: ");
    scanf("%s", name1);
    printf("Person1 Name: ");
    puts(name);
    printf("Person2 Name: ");
    puts(name1);
    printf("Length of string person1 is %d :", strlen(name));
    printf("\nLength of string person2 is %d :", strlen(name1));
    return 0;
}
