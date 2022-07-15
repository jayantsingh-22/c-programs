//Q4. To left shift the rows of a 4X5 matrix by 2 positions.
#include<stdio.h>
void moveLeft2(int *p)
{
    int temp1 = p[0];
    int temp2 = p[1];
    int i,j;
    for(i = 0; i <  5 - 2; i++)
    {
        p[i] = p[i + 2];
    }
    p[3] = temp1;
    p[4] = temp2;
    for(i=0;i<5;i++)
    {
            printf("%d ",(p[i]));
            if(i==4)
            printf("\n");
    }
}
int main()
{
    int p[4][5];
    int i,j;
printf("Enter the elements of the matrix :\n");
for(i=0;i<4;i++)    {
        for(j=0;j<5;j++)    {
            scanf("%d",&(p[i][j]));
        } 
    }
    printf("\nAfter left shifting rows by 2 positions :\n");
    for (i = 0; i < 4; i ++)
        moveLeft2(p[i]);
        printf("\nThis program is developed by JAYANT SINGH with Scholar No. 21U01041.\n");
        return 0;
} 