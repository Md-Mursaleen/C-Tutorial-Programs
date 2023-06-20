
#include <stdio.h>
int main()
{
  enum Bool
  {
    False,
    True
  } v1;

  v1 = True;
  printf("%d", v1);

  return 0;
}
