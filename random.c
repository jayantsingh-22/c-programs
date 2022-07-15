#include <stdio.h>
struct person
{
    int id;
    char name[20];
} info[3];
void details(struct person p[]);
int main()
{
    int i;
    printf("Give info below :\n");
    for(i=0;i<3;i++)
    {
        printf("Name : ");
        scanf("%s",&info[i].name);
        printf("ID   : ");
        scanf("%d",&info[i].id);
    }
    printf("\nDetails are :\n");
    details(info);
    return 0;
}
void details(struct person *p) // ...(struct person p[]) is also valid
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("Name is : %s", p->name); // p[i].name to be used when p[] is taken as parameter in void details(...)
        printf("   ID is   : %d\n",p->id);//p[i].id to be used when p[] is taken as parameter in void details(...)
    }
}