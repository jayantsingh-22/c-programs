#include <stdio.h>   //pa=&a & pb=&b means that pa & pb will store the addresses of a & b respectively.
int main()           //but *pa=&a & *pb=&b means that *pa & *pb will store the value present at 
{                    // the respective addresses of a & b.
    int a=5,b=6;
    int *pa = &a, *pb = &b;
    printf("%u %u",&a,&b);
    printf("\n%d %d",&a,&b);
    printf("\n%d %d",*pa,*pb);
    printf("\n%u %u",*pa,*pb);
    printf("\n%u %u",pa,pb);
    printf("\n%u %u",&pa,&pb);
    printf("\n%d %d",&pa,&pb);
    printf("\n%d %d",pa,pb);
    return 0;
}