#include <stdio.h>
#include <string.h>
int main()
{
   char str1[20] = "Anand ", str2[] = "Gupta";
   strcat(str1, str2);
   puts(str1);
   puts(str2);

   return 0;
}
