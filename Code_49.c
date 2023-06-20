#include <stdio.h>
#include <string.h>
int main()
{
   int i;
   char a[20] = "Anand Gupta";
   char b[20] = {'A', 'n', 'a', 'n', 'd', ' ', 'G', 'u', 'p', 't', 'a', '\0'};
   printf("Length of string a = %zu \n", strlen(a));
   printf("Length of string b = %zu \n", strlen(b));
   i = 0;
   while (b[i] != '\0')
   {
      printf("%c", b[i]);
      i = i + 1;
   }
   printf("\n");
   printf("Length of string b= %d", i);

   return 0;
}
