#include <stdio.h>
void disp1(int);
void disp2(int *);
int main()
{
   int i;
   int marks[] = {55,65,75,56,78,78,90};
   for(i=0;i<=6;i++)
   disp1(marks[i]);
   printf("\n");
   for(i=0;i<=6;i++)
   disp2(&marks[i]);
    return 0;
}
void disp1(int m)
{
    printf("%d ",m);
}
void disp2(int *n)
{
    printf("%d ",*n);
}   