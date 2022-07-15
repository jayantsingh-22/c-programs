#include <stdio.h>
int length(char sen[50]);
void main()
{
    char s[50];
    int l;
    fgets(s,50,stdin);
    l = length(s);
    printf("\n%s",s);
    printf("\nLength : %d",l);
}
int length(char sen[50])
{
   int i=0;
   while(sen[i]!='\0')
   i++;
   return i;
}