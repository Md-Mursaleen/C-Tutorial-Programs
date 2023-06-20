#include <stdio.h>
struct abc
{
    int x;
    int y;
    int z;
};
int main()
{
    struct abc a = {20, 10, 30};
    struct abc *ptr;
    ptr = &a;
    printf("\n%d %d %d", a.x, a.y, a.z);
    printf("\n%d %d %d", ptr->x, ptr->y, ptr->z);
    printf("\n%d %d %d", (*ptr).x, (*ptr).y, (*ptr).z);

    return 0;
}
