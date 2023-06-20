
#include <stdio.h>
#define PI 3.14
#define AREA
int main(void)
{
    int r;
    scanf("%d", &r);
#ifdef AREA
    printf("\nArea of circle is.....%f", PI * r * r);
#else
    printf("\nCircumference of circle is.....%f", 2 * PI * r);
#endif
    return 0;
}
