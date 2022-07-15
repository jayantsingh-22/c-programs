#include<stdio.h>
void print(char (*A)[3])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        printf("%c ",*(*(A+i)+j));
        printf("\n");
    }
    printf("\n");
}
void disp(char A[][3])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        printf("%c ",A[i][j]);
        printf("\n");
    }
}
int main()
{
    char B[2][3] = {{'2','4','6'},{'5','7','8'}};
    print(B);
    disp(B);
}