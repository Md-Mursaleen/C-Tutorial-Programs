#include <stdio.h>
struct s
{
  char *name;
};
int main()
{
  struct s teach1, teach2;
  teach1.name = "Anand";
  teach2.name = "Rajeev";
  printf("%s\n%s", teach1.name, teach2.name);
  return 0;
}
