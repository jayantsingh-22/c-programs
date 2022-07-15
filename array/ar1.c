#include <stdio.h>
int main()
{
    int n,sum=0,i,j;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int ar[n];
    printf("\n Enter 1 for sum of even elements.");
    printf("\n Enter 2 for finding frequency of an element.");
    scanf("%d",&j);
    switch(j)
    {
        case 1:
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("\n Elements of array are : ");
    for(i=0;i<n;i++)
    printf("%d ",ar[i]); 
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        sum = sum+ar[i];
        else 
        sum = sum;
    }
    printf("\n The sum of even elements of array are : %d",sum);
    break;
    case 2:
    int m,t=0;
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    printf("\n Elements of array are : ");
    for(i=0;i<n;i++)
    printf("%d ",ar[i]); 
    printf("\n Enter the element whose frequency you wanna check : ");
    scanf("%d",&m);
     for(i=0;i<n;i++)
     {
         if(ar[i]==m)
         t++;
         else 
         t = t;
     }
     printf("\n The frequency is : %d",t);
     break;
    }
    return 0;
}