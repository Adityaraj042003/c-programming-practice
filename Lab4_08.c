#include<stdio.h>
void main()
{
    int num,digits,reverse = 0;

    printf("Enter the number:\n");
    scanf("%d",&num);
    while (num!=0)
    {
        digits= num % 10;
        reverse = reverse * 10 + digits;
        num = num / 10;
        // Remove the last digit from the number
    }
    printf("The reverse of the num is:\n%d",reverse);
    


}

