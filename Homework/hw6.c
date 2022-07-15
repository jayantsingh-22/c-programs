//Q7. To replace two or more consecutive blanks in a string with a single blank.
#include <stdio.h>
#include <string.h>
int main()
{
    int i=0,count=0;
    char str[1000];
    printf("Give input string : ");
    fgets(str,1000,stdin);
    printf("\nOutput String : ");
    while(str[i] != '\0')
    {
        if(str[i] == ' ')    {
            count++;
            i++;
            continue;
        }
        if(count>1)   {
            printf(" %c",str[i]);
            count = 0;
        }
        else
        printf("%c",str[i]);
        i++;
    }
    printf("\nThe program is made by JAYANT SINGH with Scholar No. 21U01041.\n");
    return 0;
}