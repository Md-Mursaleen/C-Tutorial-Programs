#include <stdio.h>
#include <conio.h>

int main()
{
   FILE *fp;
   char ch[20];
   fp = fopen("abc.txt", "w");
   fputs("MAC-Section-1", fp);
   fclose(fp);
   fp = fopen("abc.txt", "r");
   printf("The file data is...\n");
   fgets(ch, 10, fp);
   printf("%s", ch);
   fclose(fp);
   return 0;
}
