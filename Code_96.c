#include <stdio.h>
#include <conio.h>

struct data
{
    int d1, d2;
};
int main()
{
    FILE *fp;
    struct data dt;
    fp = fopen("sample1.bin", "wb");
    dt.d1 = 5;
    dt.d2 = 7;
    fwrite(&dt, sizeof(dt), 1, fp);
    fclose(fp);
    return 0;
}
