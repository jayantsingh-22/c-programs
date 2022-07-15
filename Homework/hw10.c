//Q11. To create structure to store employees' data
//and to check if their tenure is >= 3 years.
#include <stdio.h>
struct employee 
{
    int dd,mm,yy;
    char code[15],name[20];
} emp[100];
void main()
{
    int i,n,dd,mm,yy;
    printf("Enter number of employees : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter employee code          : ");
        scanf("%s",emp[i].code);
        printf("Enter employee name          : ");
        scanf("%s",emp[i].name);
        printf("Enter join date(dd mm yyyy)  : ");
        scanf("%d%d%d",&emp[i].dd,&emp[i].mm,&emp[i].yy);
    }
    printf("\nEnter current date(dd mm yyyy) : ");
    scanf("%d%d%d",&dd,&mm,&yy);
    printf("\nEmployee(s) with tenure >= 3 years are :");
    for(i=0;i<n;i++)
    {
        if((yy-emp[i].yy) >= 3)
        {
          printf("\nEmployee Code : %s",emp[i].code);
          printf("    Employee Name : %s",emp[i].name);
          printf("    Date of Join  : %d/%d/%d\n",emp[i].dd,emp[i].mm,emp[i].yy);
    }
    }
    printf("\nThis program is made by JAYANT SINGH with Scholar No. 21U01041.");
}