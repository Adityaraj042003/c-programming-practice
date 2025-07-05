#include <stdio.h>

int main()
 {
    int dayNum;

    printf("Enter the day num(1-7): ");
    scanf("%d", &dayNum);

    if (dayNum == 1) {
        printf("Monday\n");
    } else if (dayNum == 2) {
        printf("Tuesday\n");
    } else if (dayNum == 3) {
        printf("Wednesday\n");
    } else if (dayNum == 4) {
        printf("Thursday\n");
    } else if (dayNum == 5) {
        printf("Friday\n");
    } else if (dayNum == 6) {
        printf("Saturday\n");
    } else if (dayNum == 7) {
        printf("Sunday\n");
    } else {
        printf("Invalid day number.");
    }

    return 0;
}