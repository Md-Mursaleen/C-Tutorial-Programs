#include <stdio.h>
// Storage Classes in C

void autostorageclass()
{
    auto int x = 2;
    printf("%d", x);
}

void registerstorageclass()
{
    register char a = 'B';
    printf("%d", a);
}

void externstorageclass()
{
    extern int x;
    printf("%d", x);
    x = 12;
    printf("%d", x);
}

void staticstorageclass()
{
    int i;
    for (i = 1; i < 5; i = i + 1)
    {
        static int p = 1;
        int q = 1;
        printf("%d", p);
        printf("%d", q);
    }
}
int main(void)
{
    staticstorageclass();

    return 0;
}
