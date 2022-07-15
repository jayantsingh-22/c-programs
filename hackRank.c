#include <stdio.h>
void main()
{
    char ch;
    char s[100];
    char sen[100];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%c",ch);
    printf("\n%s",s);
    printf("\n%s",sen);
    int x =1,c=0;
    while(x++<100)
    {
        x*=x;
        c++;
        if(x<10)
        continue;
        if(x>50)
        break;
    }
    printf("\n%d",c);

}