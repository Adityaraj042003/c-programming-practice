#include<stdio.h>
int main()
{
    int monthsNum;
    
    printf("Enter the months Num(1-12):");
    scanf("%d",&monthsNum);

    switch (monthsNum)
    {
    case 1:
    printf("Jan");
        break;

    case 2:
    printf("Feb");
         break;

    case 3:
    printf("March");
        break;

    case 4:
    printf("April");
       break;

    case 5:
    printf("May");
        break;

    case 6:
    printf("June");
       break;

    case 7:
    printf("July");
       break;
    
    case 8:
    printf("Aug");
       break;

    case 9:
    printf("Sep");
       break;
    case 10:
    printf("Oct");
       break;
    case 11:
    printf("Nov");
       break;
    case 12:
    printf("Dec");
        break;
        
       default:
       printf("Please enter valid months num.");
    }
        return 0;


}