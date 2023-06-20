#include <stdio.h>
int main()
{
    int a[5] = {7, 9, 2, 3, 1};
    int i, j, temp;
    printf("\nUn-Sorted list is...\n");
    for (i = 0; i < 5; i = i + 1)
        printf("%d\t", a[i]);
    for (i = 0; i < 4; i = i + 1)
        for (j = i + 1; j < 5; j = j + 1)
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    printf("\nSorted list is...\n");
    for (i = 0; i < 5; i = i + 1)
        printf("%d\t", a[i]);

    return 0;
}
