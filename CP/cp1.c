#include <stdio.h>
int add(int n);
void main()
{
   int n,res;
   printf("Enter number :");
   scanf("%d",&n);
   res = add(n);
   printf("\n The sum of digits is : %d",res);
}
int add(int a)
{
    int r=0,sum;
    if(a!=0)
    {
        r= a%10;
        sum = r+add(a/10);
    }
    else 
    return 0;
    return sum;
}