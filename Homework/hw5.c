//Q6. To extract a part of string from the main string.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char input[1000],output[1000];
    int i,len,pos,n,j=0;
    printf("Give the input string : ");
    scanf("%[^\n]%*c",input);
    printf("\nEnter the starting position of extraction : ");
    scanf("%d",&pos);
    printf("\nEnter the total characters to be extracted : ");
    scanf("%d",&n);
    len = strlen(input);
    if(pos<0 || pos>len)     
    {
        printf("\nInvalid position input.");
        exit(1);
    }
    if(n<0)
    n=0;
    for(i=0;i<len;i++)      
    {
        if(i>=pos && i<(pos+n))      
        {
            output[j] = input[i];
            ++j;
        }
    }
    printf("\nThe extracted string is : ");
    for(i=0;i<=j;i++)
    printf("%c",output[i]);
    printf("\nThis program is made by JAYANT SINGH with Scholar No. 21U01041. ");
    return 0;
}