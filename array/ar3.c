#include <stdio.h>
void main()
{
    int num[] = {24,34,12,44,56,17};
    int i,*ptr;
    ptr = &num[5];
    for(i=5;i>=0;i--)
    {
        printf("address = %u element = %d\n",ptr,*ptr);
        ptr--;
    }
    int x =10;
    int *p = &x;
    *p = 20;
    printf("%d",x);
}