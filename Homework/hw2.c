//Q3. To check if a square matrix is symmetric or not.
#include <stdio.h>
int main()
{
    int i,j,n,c=1;
    printf("In a sqaue matrix no. of rows = no. of columns.\n");
    printf("Enter the value of rows or columns : ");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("\nEnter the elements of input matrix :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        b[j][i] = a[i][j];
    }
    for(i=0;i<n;i++)     {
        for(j=0;j<n;j++)       {
            if(a[i][j] != b[i][j])    {  
            c++;
            break;
            }
        }
    }
    if(c==1)
    printf("\nThe input matrix is a symmetric matrix.\n");
    else
    printf("\nThe input matrix is not a symmetric matrix.\n");
    printf("\nThe program is developed by JAYANT SINGH with Scholar No. 21U01041.\n");
    return 0;
}