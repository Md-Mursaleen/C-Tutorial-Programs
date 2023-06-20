#include <stdio.h>
#include <string.h>
int main()
{
    char source[] = " Gupta Kumar";
    char target[] = "Anand";
    printf("\nSource string = %s", source);
    printf("\nTarget string = %s", target);
    strncat(target, source, 6);
    printf("\nTarget string after strncat( ) = %s", target);
}
