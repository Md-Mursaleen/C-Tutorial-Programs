#include <stdio.h>
struct data
{
    int d1, d2;
};
int main(void)
{
    struct data dt;
    FILE *ptr;
    ptr = fopen("sample1.bin", "wb");

    dt.d1 = 5;
    dt.d2 = 7;
    fwrite(&dt, sizeof(struct data), 1, ptr);
    fclose(ptr);
    ptr = fopen("sample1.bin", "rb");
    fread(&dt, sizeof(struct data), 1, ptr);
    printf("First data is :%d", dt.d1);
    printf("\nSecond data is :%d", dt.d2);
    // getch();
    return 0;
}
