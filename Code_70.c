#include <stdio.h>
#include <conio.h>

int main()
{
   FILE *fp;
   int rollno;
   char name[20];
   fp = fopen("student.txt", "w");
   scanf("%d", &rollno);
   scanf("%s", name);
   fprintf(fp, "%d %s", rollno, name);
   fclose(fp);
   fp = fopen("student.txt", "r");
   fscanf(fp, "%d %s", &rollno, name);
   printf("%d %s", rollno, name);
   fclose(fp);
   return 0;
}
