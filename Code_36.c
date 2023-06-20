#include <stdio.h>
float calsum(float a[]);

int main()
{
  float result, a[] = {23.4, 55, 22.6, 3, 40.5, 18};
  result = calsum(a);
  printf("Result = %.2f", result);
  return 0;
}
float calsum(float a[])
{
  float sum = 0.0;
  for (int i = 0; i < 6; ++i)
  {
    sum += a[i];
  }
  return sum;
}
