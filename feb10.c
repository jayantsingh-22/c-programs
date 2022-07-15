#include <stdio.h>
void main()
{
    int grade,fail;
    printf("Enter the grade of a student 1,2 or 3 : ");
    scanf("%d",&grade);
    printf("Enter the number of subjects failed :");
    scanf("%d",&fail);
    switch(grade)
    {
        case 1:
        switch(fail)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            printf("\n The student will get 5 grace marks per subject.");
            break;
            default:
            printf("\n The student will get no grace marks.");
        }
        break;
        case 2:
        switch(fail)
        {
            case 0:
            case 1:
            case 2:
            printf("\n The student will get 4 grace marks per subject.");
            break;
            default:
            printf("\n The student will get no grace marks.");
        }
        break;
        case 3:
        switch(fail)
        {
            case 0:
            case 1:
            printf("\n The student will get 5 grace marks per subject.");
            break;
            default:
            printf("\n The student gets no grace marks.");
        }
        break;
        default:
        printf("\n Invalid option.\n");
    }
}