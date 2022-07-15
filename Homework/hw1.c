//Q2. Program to multiply any two 3X3 Matrices.
#include <stdio.h>
int main()
{
    int i,j,k;
    int a[3][3],b[3][3],c[3][3];
    printf("Enter the elements of 1st matrix :\n");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    }
    printf("\nEnter the elements of 2nd matrix :\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    scanf("%d",&b[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = 0;
            for(k=0;k<3;k++)
            c[i][j] += a[i][k] * b[k][j];
        }
    }
    printf("\nThe product of the two matrices is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    printf("\nThe program is developed by JAYANT SINGH with Scholar No. 21U01041.");
    return 0;
}