#include <stdio.h>
enum week
{
    Mon,
    Tue,
    Wed,
    Thur,
    Fri,
    Sat,
    Sun
};
int main()
{
    enum week day;
    day = Wed;
    printf("%d", day);
    int Wed;
    Wed = 5;
    day = Wed;
    printf("\n%d", day);
    return 0;
}
