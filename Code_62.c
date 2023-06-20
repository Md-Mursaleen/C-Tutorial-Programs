#include <stdio.h>
#include <string.h>
int main()
{
  char string[55] = "Class of csai-iv";
  char *p;
  p = strchr(string, 'i');

  printf("Character i is found at position %d\n", p - string);
  printf("First occurrence of character \"i\" in \"%s\" is"
         " \"%s\"",
         string, p);
  return 0;
}
