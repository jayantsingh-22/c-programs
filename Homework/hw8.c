//Q9. To delete all vowels from a sentence.
#include <stdio.h>
#include <string.h>
int main()
{
    int i,len;
    char sen[80];
    printf("Enter a sentence :\n");
    fgets(sen,100,stdin);
    len = strlen(sen);
    for(i=0;i<len;i++)
    {
        switch(sen[i])
        {
            case 'a' :
            case 'A' :
            case 'e' :
            case 'E' :
            case 'i' :
            case 'I' :
            case 'o' :
            case 'O' :
            case 'u' :
            case 'U' :
            sen[i] = '\0';
            break;
        }
    }
        printf("\nThe sentence without vowels is :\n");
        for(i=0;i<len;i++)
        printf("%c",sen[i]);
        printf("\nThis program is made by JAYANT SINGH with Scholar No. 21U01041.");
        return 0;
}