#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char str[] = " anand gupta is teaching to class mac";
  int i;
  for (i = 0; i < strlen(str); i = i + 1)
    if (str[i] != ' ')
      printf("%c", str[i] - 32);
    else
      printf("%c", str[i]);
  return 0;
}
