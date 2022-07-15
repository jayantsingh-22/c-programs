//PSet 1 of CS50
#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i)+1;j++)
        {
            if(j == ((2*i)+2)/2)
            printf(" ");
            else 
            printf("#");
        }
        printf("\n");
    }
    return 0;
}