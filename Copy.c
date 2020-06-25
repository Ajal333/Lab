//Program to append one file to another.
//Ajal

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{

    FILE *fp;
    char content;
    FILE *fp_new;
    char file_name[30];

    printf("Enter file name: ");
    scanf("%s", file_name);
    fp = fopen(file_name, "r");     //Content: This is a text file.
    fp_new = fopen("file_2", "a+"); //Content: This is a text file.

    if (fp == NULL && fp_new == NULL)
    {
        printf("No file was read \n");
        exit(1);
        fclose(fp);
        fclose(fp_new);
    }
    else
    {
        while ((content = fgetc(fp)) != EOF)
        {
            fputc(content, fp_new);
        }
        printf("Copied! \n");
        fclose(fp);
        fclose(fp_new);
    }
}
