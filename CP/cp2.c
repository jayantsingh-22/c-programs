//To input a string comprising digits & english alphabets and 
//calculating the frequency of ecah digit in the string.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int len,i,nums[10];
    char num[1000];
    scanf("%s",num);
    len = strlen(num);
    for(i=0;i<10;i++)
    nums[i] = 0;
    for(i=0;i<len;i++)
    {
        if(num[i]>='0' && num[i]<= '9')
        {
            (nums[num[i]-'0'])++;
        }
    }
    for(i=0;i<10;i++)
    printf("%d ",nums[i]);
    return 0;
}