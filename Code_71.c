#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char d[50] = "Anand Gupta teaching to CSAI";
    fp = fopen("sample.text", "w");
    if (fp == NULL)
    {
        printf("sample.txt file failed to open.");
    }
    else
    {
        printf("The file is now opened.\n");
        if (strlen(d) > 0)
        {
            fputs(d, fp);
            fputs("\n", fp);
        }
        fclose(fp);
        printf("Data successfully written in file sample.txt\n");
        printf("The file is now closed.");
    }
    return 0;
}
