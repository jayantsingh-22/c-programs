#include <stdio.h>
void shift(int q[][5]);
int main()
{
    int m[4][5];
    int i,j;
    printf("Enter elements :\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
            scanf("%d",&m[i][j]);
    }
    printf("Matrix is :\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
            printf("%d ",m[i][j]);
            printf("\n");
    }
    printf("\n");
    shift(m);
    return 0;
}
void shift(int q[][5])
{
    int i,j,temp1,temp2;
    for(i=0;i<4;i++)
    {
        for(j=0;j<(5-2);j++)
        {
            if(j<1)
            {
              temp1 = q[i][0];
              temp2 = q[i][1];
            }
            q[i][j] = q[i][j+2];
        }
        q[i][3] = temp1;
        q[i][4] = temp2;
    }
    printf("Post-Shift,Matrix is :\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        printf("%d ",q[i][j]);
        printf("\n");
    }
}