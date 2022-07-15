//Q12. To copy one text file to another.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("start.txt","r");
    if(fp1 == NULL)
    {
        puts("File does not exist..");
        exit(1);
    }
    fp2 = fopen("end.txt", "w");
    if(fp2 ==  NULL)
    {
        puts("File does not exist..");
        fclose(fp1);
        exit(1);
    }
    while((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch,fp2);
    }
    printf("\nFile successfully copied..");
    printf("\nThis program is made by JAYANT SINGH with Scholar No. 21U01041.\n");
}