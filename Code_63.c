#include <stdio.h>
#include <string.h>
int main()
{
  char string[55] = "This csai class and csai class section iv";
  char *p;
  p = strstr(string, "csai");
  if (p)
  {
    printf("string found\n");
    printf("First occurrence of string \"csai\" in \"%s\" is"
           " \"%s\"",
           string, p);
  }
  else
    printf("string not found\n");
  return 0;
}
