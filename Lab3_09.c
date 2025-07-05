#include <stdio.h>

int main()
 {
    int monthsNum;

    printf("Enter the months num(1-12): ");
    scanf("%d", &monthsNum);

    if (monthsNum == 1) {
        printf("Jan\n");
    } else if (monthsNum == 2) {
        printf("Feb\n");
    } else if (monthsNum == 3) {
        printf("March\n");
    } else if (monthsNum == 4) {
        printf("April\n");
    } else if (monthsNum == 5) {
        printf("May\n");
    } else if (monthsNum == 6) {
        printf("June\n");
    } else if (monthsNum == 7) {
        printf("July\n");
    } else if (monthsNum == 8){
        printf("Aug\n");
    }else if (monthsNum == 9){
       printf("Sep\n");
    }else if (monthsNum == 10){
        printf("Oct\n");
     }else if (monthsNum == 11){
        printf("Nov\n");
    }else if (monthsNum == 12){
        printf("Dec\n");
    }else{
        printf("invalid months number");
    }


    return 0;
}