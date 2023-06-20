#include <stdio.h>
struct abc
{
    int x;
    int y;
    int z;
};
int main()
{
    struct abc a = {.z = 20, .y = 10, .x = 30};
    printf("%d %d %d", a.x, a.y, a.z);

    return 0;
}
