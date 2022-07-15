// Q1. To get the largest number in 5X5 Matrix.
#include <stdio.h>
int main()
{
    int i,j,max=0;
    int ar[5][5];
    printf("Enter the elements of the matrix :\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&ar[i][j]);
        }
        printf("\n");
    }
    printf("\nThe elements of the matrix are as follows :\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(ar[i][j] > max)
            max = ar[i][j];
        }
    }
    printf("\nThe largest number in the matrix is : %d",max);
    printf("\nThis program is developed by JAYANT SINGH with Scholar No. 21U01041.");
    return 0;
}