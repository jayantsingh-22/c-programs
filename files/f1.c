//Program to display contents of a file in screen.
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("data.txt","r");
    while(1)
    {
        ch = fgetc(fp);
        if(ch == EOF)
        break;
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}