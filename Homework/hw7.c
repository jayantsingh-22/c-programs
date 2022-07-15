//Q8. To sort names alphabetically in ascending order.
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,n;
    char names[100][100],s[100];
    printf("Enter total number of names : ");
    scanf("%d",&n);
    printf("\nEnter names in any order :\n");
    for(i=0;i<n;i++)
    scanf("%s",names[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)    {
            if(strcmp(names[i],names[j])>0)
            {
                strcpy(s,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],s);
            }
        }
    }
    printf("\nThe sorted order of names are :\n");
    for(i=0;i<n;i++)
    printf("%s\n",names[i]);
    printf("The program is made by JAYANT SINGH with Scholar No. 21U01041.");
    return 0;
}