#include <stdio.h>
struct student
{
    char name[60];
    int roll_no;
    float marks;
};
int main()
{
    struct student c[3], temp;
    int i, j;
    printf("Enter Details...\n");
    for (i = 0; i < 3; i++)
        scanf("%s %d %f", c[i].name, &c[i].roll_no, &c[i].marks);
    printf("\n\n\nName\t Roll No \t Marks\n");
    for (i = 0; i < 3; i++)
        for (j = i + 1; j < 3; j++)
            if (c[i].roll_no > c[j].roll_no)
            {
                int temp;
                temp = c[i].roll_no;
                c[i].roll_no = c[j].roll_no;
                c[j].roll_no = temp;
            }
    printf("\nSorted list is...\n");
    for (i = 0; i < 3; i = i + 1)
        printf("%d\t", c[i].roll_no);

    return 0;
}
