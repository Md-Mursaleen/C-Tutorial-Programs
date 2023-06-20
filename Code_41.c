#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[60];
};

void main()
{
    struct student st;
    st.rollno = 1;
    strcpy(st.name, "Deepak Kumar");
    printf("Rollno : %d\n", st.rollno);
    printf("Name : %s\n", st.name);
}
