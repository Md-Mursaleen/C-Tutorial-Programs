
#include <stdio.h>
#include <string.h>
int main()
{
  char str1[] = "Mursaleen";
  int i;
  for (i = 0; i < strlen(str1); i = i + 1)
    printf("%c", str1[strlen(str1) - i - 1]);
  return 0;
}
