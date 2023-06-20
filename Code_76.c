#include <stdio.h>
enum Bool
{
  False,
  True
};
int main()
{
  enum Bool v1;
  v1 = True;
  printf("%d", v1);

  return 0;
}
