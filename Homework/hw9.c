//Q10. To create a structure to store students data and
// Also to create functions to print :
// a) Names of students of same joining year. b) Data of a student whose Roll Number is given.
#include <stdio.h>
struct students 
{
    int roll;
    char name[50],deptt[50],course[20];
    int year;
} s[450];
int n;
void disp_names(int Year);
void disp_data(int enroll);
void main()       {
    int i,yr,Roll;
    printf("How many students' data you want to store : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)      {
        printf("\nenter rollnumber:  ");
        scanf("%d",&s[i].roll);
        printf("enter name:  ");
        scanf(" %s",&s[i].name);
        printf("enter department:  ");
        scanf("%s",&s[i].deptt);
        printf("enter course:  ");
        scanf("%s",&s[i].course);
        printf("enter year of joining:  ");
        scanf("%d",&s[i].year);
    }
    printf("\nEnter year of joining of students : ");
    scanf("%d",&yr);
    disp_names(yr);
    printf("\nEnter the roll number of a student : ");
    scanf("%d",&Roll);
    disp_data(Roll);
    printf("\nThis program is made by Jayant Singh with Scholar No. 21U01041.");
}
void disp_names(int Year)   {
    int i;
    printf("\nThese students joined in year %d :\n",Year);
    for(i=0;i<n;i++)          {
        if(s[i].year == Year)
        printf("%s ",s[i].name);
    }  }
void disp_data(int enroll)      {
    int i;
    for(i=0;i<n;i++)             {
        if(s[i].roll == enroll)    {
            printf("\nDetails are :\n");
            printf("Name            : %s\n",s[i].name);
            printf("Department      : %s\n",s[i].deptt);
            printf("Course          : %s\n",s[i].course);
            printf("Year of Joining : %d\n",s[i].year);
            break;
        }   }   } 