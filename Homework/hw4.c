//Q5. To convert lowercase characters in a string to uppercase.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,len;
    char str[1000];
    printf("Enter the string : ");
    scanf("%[^\n]%*c",str);
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]>=97 && str[i]<=122)
        str[i] = str[i] - 32;
    }
    printf("\nThe converted string is : ");
    for(i=0;i<len;i++)
    printf("%c",str[i]);
    printf("\nThis program is made by JAYANT SINGH with Scholar No. 21U01041.");
    return 0;
}