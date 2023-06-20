#include <stdio.h>
int largest(int a[]);

int main()
{
  int result, a[] = {23, 55, 22, 3, 2, 18};
  result = largest(a);
  printf("Result = %d", result);
  return 0;
}
int largest(int b[])
{
  int larg = b[0];
  for (int i = 1; i < 6; ++i)
  {
    if (larg < b[i])
      larg = b[i];
  }
  return larg;
}
