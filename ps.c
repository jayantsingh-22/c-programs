#include <stdio.h>
int max_of_four(int a,int b,int c,int d)
{
    int max;
    (a>b)?(a>c)?(max=a):(max=c):(b>c)?(max=b):(max=c);
    if(max<d)
    return d;
    else
    return max;
}
void main()
{
    int a,b,c,d;
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
    int ans = max_of_four(a,b,c,d);
    printf("%d",ans);
}