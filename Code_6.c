#include <stdio.h>
void dispnum(int a[][2]);
void matmul(int a[][2], int b[][2], int c[][2]);
void matadd(int x[][2], int y[][2], int z[][2]);
int main()
{
    int a[2][2] = {1, 2, 3, 4};
    int b[2][2] = {1, 0, 0, 1};
    int c[2][2];
    printf("Display 1st matrix:\n");
    dispnum(a);
    printf("Display 2nd matrix:\n");
    dispnum(b);
    matadd(a, b, c);
    printf("Display Addition of matrix:\n");
    dispnum(c);
    printf("\n");
    matmul(a, b, c);
    printf("Display Multiplication of matrix:\n");
    dispnum(c);
    return 0;
}
void matmul(int x[][2], int y[][2], int z[][2])
{
    int i, j, k;
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
        {
            z[i][j] = 0;
            for (k = 0; k < 2; k++)
                z[i][j] += x[i][k] * y[k][j];
        }
}
void matadd(int x[][2], int y[][2], int z[][2])
{
    int i, j;
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
        {

            z[i][j] = x[i][j] + y[i][j];
        }
}
void dispnum(int a[][2])
{
    int i, j;
    printf("Displaying:\n");
    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 2; ++j)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}
