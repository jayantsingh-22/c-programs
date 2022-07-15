//Q10. To perform sorting on an array input by the user.
#include <stdio.h>
void main()
{
    int i,j,a,l,num[30];
    printf("\nEnter the length of array : ");
    scanf("%d",&l);
    printf("\nEnter the array elements :\n");
    for(i=0;i<l;i++)
    scanf("%d",&num[i]);
    printf("\nArray elements are : ");
    for(i=0;i<l;i++)
    printf("%d ",num[i]);
    for(i=0;i<l;i++)   {
        for(j=i+1;j<l;j++)   {
            if(num[i]>num[j])     {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    printf("\nThe numbers arranged in ascending order after sorting are :");
    for(i=0;i<l;i++)
    printf("%d ",num[i]);
     printf("\nThis program is developed by JAYANT SINGH with Scholar No. 21U01041.");
}